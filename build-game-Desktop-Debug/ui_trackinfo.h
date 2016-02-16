/********************************************************************************
** Form generated from reading UI file 'trackinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKINFO_H
#define UI_TRACKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackInfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *TrackInfo)
    {
        if (TrackInfo->objectName().isEmpty())
            TrackInfo->setObjectName(QStringLiteral("TrackInfo"));
        TrackInfo->resize(1366, 768);
        label = new QLabel(TrackInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1371, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(TrackInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 30, 361, 91));
        label_3 = new QLabel(TrackInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 170, 641, 551));
        pushButton = new QPushButton(TrackInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1060, 640, 171, 81));
        pushButton->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_2 = new QPushButton(TrackInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(980, 520, 311, 81));
        pushButton_2->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_3 = new QPushButton(TrackInfo);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(980, 400, 311, 81));
        pushButton_3->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_4 = new QPushButton(TrackInfo);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1040, 280, 201, 81));
        pushButton_4->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));

        retranslateUi(TrackInfo);

        QMetaObject::connectSlotsByName(TrackInfo);
    } // setupUi

    void retranslateUi(QWidget *TrackInfo)
    {
        TrackInfo->setWindowTitle(QApplication::translate("TrackInfo", "Form", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("TrackInfo", "TextLabel", 0));
        label_3->setText(QApplication::translate("TrackInfo", "TextLabel", 0));
        pushButton->setText(QApplication::translate("TrackInfo", "Back", 0));
        pushButton_2->setText(QApplication::translate("TrackInfo", "Global High Scores", 0));
        pushButton_3->setText(QApplication::translate("TrackInfo", "Personal High Scores", 0));
        pushButton_4->setText(QApplication::translate("TrackInfo", "Play Game", 0));
    } // retranslateUi

};

namespace Ui {
    class TrackInfo: public Ui_TrackInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKINFO_H
