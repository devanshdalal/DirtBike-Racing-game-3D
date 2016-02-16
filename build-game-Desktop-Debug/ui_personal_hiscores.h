/********************************************************************************
** Form generated from reading UI file 'personal_hiscores.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONAL_HISCORES_H
#define UI_PERSONAL_HISCORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Personal_HiScores
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_13;

    void setupUi(QWidget *Personal_HiScores)
    {
        if (Personal_HiScores->objectName().isEmpty())
            Personal_HiScores->setObjectName(QStringLiteral("Personal_HiScores"));
        Personal_HiScores->resize(1366, 768);
        label = new QLabel(Personal_HiScores);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1371, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(Personal_HiScores);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1140, 610, 171, 81));
        pushButton->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label_2 = new QLabel(Personal_HiScores);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 30, 871, 111));
        layoutWidget = new QWidget(Personal_HiScores);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 200, 651, 531));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_13 = new QLabel(Personal_HiScores);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(1000, 50, 321, 91));

        retranslateUi(Personal_HiScores);

        QMetaObject::connectSlotsByName(Personal_HiScores);
    } // setupUi

    void retranslateUi(QWidget *Personal_HiScores)
    {
        Personal_HiScores->setWindowTitle(QApplication::translate("Personal_HiScores", "Form", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Personal_HiScores", "Back", 0));
        label_2->setText(QApplication::translate("Personal_HiScores", "TextLabel", 0));
        label_3->setText(QApplication::translate("Personal_HiScores", "TextLabel", 0));
        label_4->setText(QApplication::translate("Personal_HiScores", "TextLabel", 0));
        label_5->setText(QApplication::translate("Personal_HiScores", "TextLabel", 0));
        label_6->setText(QApplication::translate("Personal_HiScores", "TextLabel", 0));
        label_7->setText(QApplication::translate("Personal_HiScores", "TextLabel", 0));
        label_13->setText(QApplication::translate("Personal_HiScores", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Personal_HiScores: public Ui_Personal_HiScores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONAL_HISCORES_H
