/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainwindow1
{
public:
    QPushButton *confirmButton;
    QPushButton *nextButton;
    QLabel *wordLabel;
    QLabel *statusLabel;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *infolabel;
    QLabel *idlabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *mainwindow1)
    {
        if (mainwindow1->objectName().isEmpty())
            mainwindow1->setObjectName("mainwindow1");
        mainwindow1->resize(400, 300);
        confirmButton = new QPushButton(mainwindow1);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(60, 240, 81, 31));
        nextButton = new QPushButton(mainwindow1);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(200, 240, 81, 31));
        wordLabel = new QLabel(mainwindow1);
        wordLabel->setObjectName("wordLabel");
        wordLabel->setGeometry(QRect(90, 60, 241, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(11);
        wordLabel->setFont(font);
        statusLabel = new QLabel(mainwindow1);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(260, 20, 121, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(12);
        statusLabel->setFont(font1);
        lineEdit = new QLineEdit(mainwindow1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 120, 141, 31));
        label = new QLabel(mainwindow1);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 120, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(14);
        label->setFont(font2);
        infolabel = new QLabel(mainwindow1);
        infolabel->setObjectName("infolabel");
        infolabel->setGeometry(QRect(40, 170, 261, 61));
        QFont font3;
        font3.setPointSize(10);
        infolabel->setFont(font3);
        idlabel = new QLabel(mainwindow1);
        idlabel->setObjectName("idlabel");
        idlabel->setGeometry(QRect(120, 15, 151, 21));
        idlabel->setFont(font1);
        pushButton = new QPushButton(mainwindow1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 203, 81, 31));
        pushButton_2 = new QPushButton(mainwindow1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 153, 81, 31));

        retranslateUi(mainwindow1);

        QMetaObject::connectSlotsByName(mainwindow1);
    } // setupUi

    void retranslateUi(QDialog *mainwindow1)
    {
        mainwindow1->setWindowTitle(QCoreApplication::translate("mainwindow1", "Dialog", nullptr));
        confirmButton->setText(QCoreApplication::translate("mainwindow1", "\347\241\256\345\256\232", nullptr));
        nextButton->setText(QCoreApplication::translate("mainwindow1", "\344\270\213\344\270\200\351\242\230", nullptr));
        wordLabel->setText(QCoreApplication::translate("mainwindow1", "TextLabel", nullptr));
        statusLabel->setText(QCoreApplication::translate("mainwindow1", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("mainwindow1", "\350\213\261\350\257\255\345\215\225\350\257\215", nullptr));
        infolabel->setText(QCoreApplication::translate("mainwindow1", "TextLabel", nullptr));
        idlabel->setText(QCoreApplication::translate("mainwindow1", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("mainwindow1", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainwindow1", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow1: public Ui_mainwindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
