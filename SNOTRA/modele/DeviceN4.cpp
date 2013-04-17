#include "DeviceN4.h"

DeviceN4::DeviceN4() {
}

DeviceN4::DeviceN4(int numberOfInterface, std::vector<std::string> names, std::vector<std::string> ip) : Device(numberOfInterface, names, ip) {
}

DeviceN4::~DeviceN4() {
}

RoutingTable DeviceN4::getRoutingTable() const {
    return routingTable;
}

void DeviceN4::setRoutingTable(RoutingTable routingTable_) {
    routingTable = routingTable_;
}

ARPTable DeviceN4::getARPTable() const {
    return arpTable;
}

void DeviceN4::setARPTable(ARPTable arpTable_) {
    arpTable = arpTable_;
}

void DeviceN4::receiveFrame(std::shared_ptr<Frame> frame, int interfaceId, int portId) {
    Device::receiveFrame(frame, interfaceId, portId);
    //The interface check if the Mac is acceptable and return the extracted frame
    //TODO : check the datalink level protocol at the same time (ARP/IP)
    std::shared_ptr<Frame> newFrame = Device::giveFrameToInterface(frame, interfaceId);
    if (newFrame != (std::shared_ptr<Frame>)0) {
        std::shared_ptr<NetworkHeader> networkHeader = std::dynamic_pointer_cast<NetworkHeader > (newFrame->getHeader());
        networkHeader->decreaseTimeToLive();
        //Checking if the destination Ip is acceptable by the interface
        if(networkHeader->getDestination() == getNetworkInterfaces().at(interfaceId).getIp()) { 
            //TODO : manage the other case where the interface could accept the Ip (promiscious, routing...)
            //Checking the protocol
            if(networkHeader->getProtocole() == ICMP) {
                if(networkHeader->getIsAnswer()) {
                    //TODO : print on screen that the ping request came back without problem
                }
                else {
                    //Sending the response to the request
                    std::shared_ptr<ICMPHeader> transportHeader = std::dynamic_pointer_cast<ICMPHeader>(frame->getHeader());
                    createFrame(transportHeader->getSourceIp(), "ICMP", false);
                }
            }
            if(networkHeader->getProtocole() == NONE) {
                std::shared_ptr<DataLinkHeader> dataLinkHeader = std::dynamic_pointer_cast<DataLinkHeader>(newFrame->getData()->getHeader());
                //checking the protocol from the level below (DataLink)
                if(dataLinkHeader->getType() == ARP) {
                    std::shared_ptr<ARPHeader> networkHeader2 = std::dynamic_pointer_cast<ARPHeader>(newFrame->getHeader());
                    if(dataLinkHeader->getIsAnswer()) {
                        //Registering the response in the ARPTable.
                        arpTable.addLine(networkHeader2->getSource(), networkHeader2->getSourceMac());
                    }
                    else {
                        //Respond to the ARP request
                        createFrame(networkHeader->getSource(), "ARP", false);
                    }
                }
            }
        }
    }
}

void DeviceN4::sendFrame(std::shared_ptr<Frame> frame) {
    std::shared_ptr<DataLinkHeader> header = std::dynamic_pointer_cast<DataLinkHeader > (frame->getHeader());
    if (header->getDestination() == Mac("FF:FF:FF:FF:FF:FF")) {
        Device::sendFrameBroadcast(frame);
    } else {
        Device::sendFrameUnicast(frame, frame->getInterfaceId(), frame->getPortId());
    }
}

void DeviceN4::createFrame(Ip destination, std::string protocole, bool isAnswer) {
    int temp = routingTable.getLineByIp(destination).second;
    if (temp != -1) {
        std::shared_ptr<Frame> frame;
        std::shared_ptr<Header> networkHeader;
        std::shared_ptr<Frame> networkFrame;
        std::shared_ptr<Header> dataLinkHeader;
        Ip source = getNetworkInterfaces().at(temp).getIp();
        Ip gateway = routingTable.getLineByIp(destination).first;
        if (protocole.compare("ARP")) {
            if (isAnswer) {
                networkHeader = std::shared_ptr<ARPHeader>(new ARPHeader(source, destination, STANDART_TTL, NONE, getNetworkInterfaces().at(temp).getMac(), arpTable.getMacByIp(destination), true));
            } else {
                networkHeader = std::shared_ptr<ARPHeader>(new ARPHeader(source, destination, STANDART_TTL, NONE, getNetworkInterfaces().at(temp).getMac(), Mac("FF:FF:FF:FF:FF:FF"), false));
            }
            networkFrame = std::shared_ptr<Frame > (new Frame(0, networkHeader, 0, 0));
        } else if (protocole.compare("UDP")) {
            //TODO
        } else if (protocole.compare("TCP")) {
            //TODO
        } else if (protocole.compare("ICMP")) {
            std::shared_ptr<Header> transportHeader = std::shared_ptr<ICMPHeader > (new ICMPHeader(source, isAnswer));
            std::shared_ptr<Frame> transportFrame = std::shared_ptr<Frame > (new Frame(0, transportHeader, 0, 0));
            networkHeader = std::shared_ptr<Header > (new NetworkHeader(source, destination, STANDART_TTL, ICMP, isAnswer));
            networkFrame = std::shared_ptr<Frame > (new Frame(transportFrame, networkHeader, 0, 0));
            Mac macDest = arpTable.getMacByIp(destination);
            if(macDest == Mac("00:00:00:00:00:00")) {
                createFrame(destination, "ARP");
            }
            macDest = arpTable.getMacByIp(destination);
            dataLinkHeader = std::shared_ptr<DataLinkHeader > (new DataLinkHeader(getNetworkInterfaces().at(temp).getMac(), macDest, isAnswer));
            frame = std::shared_ptr<Frame > (new Frame(networkFrame, dataLinkHeader, 0, 0));
        }
        getNetworkInterfaces().at(temp).sendFrame(frame, 0);
    }
}

void DeviceN4::connectNeighbour(std::shared_ptr<Device> neighbour, int thisInterfaceId, int thisPortId, int neighbourInterfaceId, int neighbourPortId, bool isContinue) {
    Device::connectNeighbour(neighbour, thisInterfaceId, thisPortId, neighbourInterfaceId, neighbourPortId, isContinue);
    routingTable.addLine(neighbour->getNetworkInterfaces().at(neighbourInterfaceId).getIp(), neighbour->getNetworkInterfaces().at(thisInterfaceId).getIp(), thisInterfaceId);
}
