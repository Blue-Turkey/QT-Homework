/********************************************************************************
** Form generated from reading UI file 'intro1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRO1_H
#define UI_INTRO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_intro1
{
public:

    void setupUi(QDialog *intro1)
    {
        if (intro1->objectName().isEmpty())
            intro1->setObjectName("intro1");

        retranslateUi(intro1);

        QMetaObject::connectSlotsByName(intro1);
    } // setupUi

    void retranslateUi(QDialog *intro1)
    {
        intro1->setWindowTitle(QCoreApplication::translate("intro1", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class intro1: public Ui_intro1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRO1_H
