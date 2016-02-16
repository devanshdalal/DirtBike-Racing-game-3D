/********************************************************************************
** Form generated from reading UI file 'chooselevel.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSELEVEL_H
#define UI_CHOOSELEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseLevel
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *chooseLevel)
    {
        if (chooseLevel->objectName().isEmpty())
            chooseLevel->setObjectName(QStringLiteral("chooseLevel"));
        chooseLevel->resize(600, 450);
        label = new QLabel(chooseLevel);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 600, 450));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(chooseLevel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 0, 291, 81));
        pushButton = new QPushButton(chooseLevel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 290, 181, 51));
        pushButton->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,139,61,200);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_2 = new QPushButton(chooseLevel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 290, 181, 51));
        pushButton_2->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(139,61,72,200);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_3 = new QPushButton(chooseLevel);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 190, 221, 51));
        pushButton_3->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(0,0,0,150);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));

        retranslateUi(chooseLevel);

        QMetaObject::connectSlotsByName(chooseLevel);
    } // setupUi

    void retranslateUi(QWidget *chooseLevel)
    {
        chooseLevel->setWindowTitle(QApplication::translate("chooseLevel", "Form", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("chooseLevel", "<html><head/><body><p><span style=\" font-size:24pt; color:#0055ff;\">Choose difficulty : </span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("chooseLevel", "Easy", 0));
        pushButton_2->setText(QApplication::translate("chooseLevel", "Difficult", 0));
        pushButton_3->setText(QApplication::translate("chooseLevel", "Practice", 0));
    } // retranslateUi

};

namespace Ui {
    class chooseLevel: public Ui_chooseLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSELEVEL_H
