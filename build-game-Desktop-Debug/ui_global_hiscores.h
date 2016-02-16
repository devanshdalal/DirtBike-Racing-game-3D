/********************************************************************************
** Form generated from reading UI file 'global_hiscores.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBAL_HISCORES_H
#define UI_GLOBAL_HISCORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Global_HiScores
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QWidget *Global_HiScores)
    {
        if (Global_HiScores->objectName().isEmpty())
            Global_HiScores->setObjectName(QStringLiteral("Global_HiScores"));
        Global_HiScores->resize(1366, 768);
        label = new QLabel(Global_HiScores);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1371, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Global_HiScores);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 30, 831, 111));
        pushButton = new QPushButton(Global_HiScores);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1140, 610, 171, 81));
        pushButton->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        layoutWidget = new QWidget(Global_HiScores);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 200, 901, 501));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 5, 1, 1, 1);

        label_13 = new QLabel(Global_HiScores);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(880, 50, 441, 91));

        retranslateUi(Global_HiScores);

        QMetaObject::connectSlotsByName(Global_HiScores);
    } // setupUi

    void retranslateUi(QWidget *Global_HiScores)
    {
        Global_HiScores->setWindowTitle(QApplication::translate("Global_HiScores", "Global High Scores!!", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Global_HiScores", "Back", 0));
        label_10->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_4->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_9->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_8->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_7->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_3->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_6->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_5->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_11->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_12->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
        label_13->setText(QApplication::translate("Global_HiScores", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Global_HiScores: public Ui_Global_HiScores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBAL_HISCORES_H
