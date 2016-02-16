/********************************************************************************
** Form generated from reading UI file 'newgame.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAME_H
#define UI_NEWGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newgame
{
public:
    QPushButton *pushButton_11;
    QLabel *label_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *newgame)
    {
        if (newgame->objectName().isEmpty())
            newgame->setObjectName(QStringLiteral("newgame"));
        newgame->resize(1366, 768);
        pushButton_11 = new QPushButton(newgame);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(580, 650, 171, 91));
        pushButton_11->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label_2 = new QLabel(newgame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 280, 371, 71));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        pushButton_7 = new QPushButton(newgame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(580, 510, 171, 61));
        pushButton_7->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_10 = new QPushButton(newgame);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(1070, 510, 171, 61));
        pushButton_10->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_9 = new QPushButton(newgame);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(824, 510, 172, 61));
        pushButton_9->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_8 = new QPushButton(newgame);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(350, 510, 172, 61));
        pushButton_8->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_5 = new QPushButton(newgame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1070, 369, 172, 61));
        pushButton_5->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_6 = new QPushButton(newgame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(110, 510, 171, 61));
        pushButton_6->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_3 = new QPushButton(newgame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 369, 172, 61));
        pushButton_3->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_4 = new QPushButton(newgame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(828, 369, 171, 61));
        pushButton_4->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_2 = new QPushButton(newgame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 370, 171, 61));
        pushButton_2->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton = new QPushButton(newgame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 370, 171, 61));
        pushButton->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label = new QLabel(newgame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1371, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike1.jpg")));
        label->setScaledContents(true);
        label->raise();
        pushButton_11->raise();
        label_2->raise();
        pushButton_7->raise();
        pushButton_10->raise();
        pushButton_9->raise();
        pushButton_8->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_2->raise();
        pushButton->raise();

        retranslateUi(newgame);

        QMetaObject::connectSlotsByName(newgame);
    } // setupUi

    void retranslateUi(QWidget *newgame)
    {
        newgame->setWindowTitle(QApplication::translate("newgame", "Form", 0));
        pushButton_11->setText(QApplication::translate("newgame", "Back", 0));
        label_2->setText(QApplication::translate("newgame", "<html><head/><body><p><span style=\" font-size:36pt; color:#5f2ffc;\">Choose track :</span></p></body></html>", 0));
        pushButton_7->setText(QApplication::translate("newgame", "Track 8", 0));
        pushButton_10->setText(QApplication::translate("newgame", "Track 10", 0));
        pushButton_9->setText(QApplication::translate("newgame", "Track 9", 0));
        pushButton_8->setText(QApplication::translate("newgame", "Track 7", 0));
        pushButton_5->setText(QApplication::translate("newgame", "Track 5", 0));
        pushButton_6->setText(QApplication::translate("newgame", "Track 6", 0));
        pushButton_3->setText(QApplication::translate("newgame", "Track 3", 0));
        pushButton_4->setText(QApplication::translate("newgame", "Track 4", 0));
        pushButton_2->setText(QApplication::translate("newgame", "Track 2", 0));
        pushButton->setText(QApplication::translate("newgame", "Track 1", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class newgame: public Ui_newgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAME_H
