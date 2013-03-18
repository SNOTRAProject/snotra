/********************************************************************************
** Form generated from reading UI file 'WireShark.ui'
**
** Created: Mon Mar 18 18:44:30 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRESHARK_H
#define UI_WIRESHARK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WireShark
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QTextBrowser *sourceView;
    QTextBrowser *timeView;
    QTextBrowser *numberView;
    QLabel *time;
    QTextBrowser *destinatioView;
    QLabel *source;
    QLabel *destination;
    QLabel *number;
    QTextBrowser *textBrowser;
    QLabel *label;
    QTextBrowser *DetailFrameView;

    void setupUi(QDialog *WireShark)
    {
        if (WireShark->objectName().isEmpty())
            WireShark->setObjectName(QString::fromUtf8("WireShark"));
        WireShark->resize(1241, 398);
        verticalLayout_2 = new QVBoxLayout(WireShark);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sourceView = new QTextBrowser(WireShark);
        sourceView->setObjectName(QString::fromUtf8("sourceView"));

        gridLayout_3->addWidget(sourceView, 2, 2, 1, 1);

        timeView = new QTextBrowser(WireShark);
        timeView->setObjectName(QString::fromUtf8("timeView"));

        gridLayout_3->addWidget(timeView, 2, 1, 1, 1);

        numberView = new QTextBrowser(WireShark);
        numberView->setObjectName(QString::fromUtf8("numberView"));

        gridLayout_3->addWidget(numberView, 2, 0, 1, 1);

        time = new QLabel(WireShark);
        time->setObjectName(QString::fromUtf8("time"));
        time->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(time, 0, 1, 1, 1);

        destinatioView = new QTextBrowser(WireShark);
        destinatioView->setObjectName(QString::fromUtf8("destinatioView"));

        gridLayout_3->addWidget(destinatioView, 2, 3, 1, 1);

        source = new QLabel(WireShark);
        source->setObjectName(QString::fromUtf8("source"));
        source->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(source, 0, 2, 1, 1);

        destination = new QLabel(WireShark);
        destination->setObjectName(QString::fromUtf8("destination"));
        destination->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(destination, 0, 3, 1, 1);

        number = new QLabel(WireShark);
        number->setObjectName(QString::fromUtf8("number"));
        number->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(number, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(WireShark);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_3->addWidget(textBrowser, 2, 4, 1, 1);

        label = new QLabel(WireShark);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        DetailFrameView = new QTextBrowser(WireShark);
        DetailFrameView->setObjectName(QString::fromUtf8("DetailFrameView"));

        verticalLayout->addWidget(DetailFrameView);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(WireShark);

        QMetaObject::connectSlotsByName(WireShark);
    } // setupUi

    void retranslateUi(QDialog *WireShark)
    {
        WireShark->setWindowTitle(QApplication::translate("WireShark", "WireShark", 0, QApplication::UnicodeUTF8));
        sourceView->setHtml(QApplication::translate("WireShark", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.16"
                        "8.0.2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.2</p></body></html>", 0, QApplication::UnicodeUTF8));
        timeView->setHtml(QApplication::translate("WireShark", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12:12</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12:16</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12:18</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">13:20</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">14:12</p>\n"
"<p style=\" marg"
                        "in-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">15:50</p></body></html>", 0, QApplication::UnicodeUTF8));
        numberView->setHtml(QApplication::translate("WireShark", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">tcp</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">tcp</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">udp</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">udp</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ip</p>\n"
"<p style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">eth</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></body></html>", 0, QApplication::UnicodeUTF8));
        time->setText(QApplication::translate("WireShark", "TEMPS", 0, QApplication::UnicodeUTF8));
        destinatioView->setHtml(QApplication::translate("WireShark", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.16"
                        "8.0.1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">192.168.0.1</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        source->setText(QApplication::translate("WireShark", "SOURCE", 0, QApplication::UnicodeUTF8));
        destination->setText(QApplication::translate("WireShark", "DESTINATION", 0, QApplication::UnicodeUTF8));
        number->setText(QApplication::translate("WireShark", "PROTOCOLE", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("WireShark", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Flag:1--ACK--TTL:100--frame number:19</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Flag:1--ACK SYN--TTL:99--frame number:20</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Flag:1--ACK--TTL:90</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WireShark", "INFO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WireShark: public Ui_WireShark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRESHARK_H
