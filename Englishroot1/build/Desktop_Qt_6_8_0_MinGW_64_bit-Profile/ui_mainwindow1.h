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
        confirmButton->setGeometry(QRect(50, 240, 80, 24));
        nextButton = new QPushButton(mainwindow1);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(170, 240, 80, 24));
        wordLabel = new QLabel(mainwindow1);
        wordLabel->setObjectName("wordLabel");
        wordLabel->setGeometry(QRect(30, 40, 271, 41));
        statusLabel = new QLabel(mainwindow1);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(310, 10, 81, 81));
        lineEdit = new QLineEdit(mainwindow1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 100, 113, 23));
        label = new QLabel(mainwindow1);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 100, 54, 16));
        infolabel = new QLabel(mainwindow1);
        infolabel->setObjectName("infolabel");
        infolabel->setGeometry(QRect(20, 150, 261, 61));
        idlabel = new QLabel(mainwindow1);
        idlabel->setObjectName("idlabel");
        idlabel->setGeometry(QRect(80, 10, 151, 16));
        pushButton = new QPushButton(mainwindow1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 210, 80, 24));
        pushButton_2 = new QPushButton(mainwindow1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 160, 80, 24));

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
