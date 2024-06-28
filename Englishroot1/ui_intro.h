/********************************************************************************
** Form generated from reading UI file 'intro.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRO_H
#define UI_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Intro
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *Intro)
    {
        if (Intro->objectName().isEmpty())
            Intro->setObjectName("Intro");
        Intro->resize(526, 392);
        tabWidget = new QTabWidget(Intro);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 10, 481, 371));
        tab = new QWidget();
        tab->setObjectName("tab");
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 481, 351));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(0, 0, 481, 351));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Intro);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Intro);
    } // setupUi

    void retranslateUi(QDialog *Intro)
    {
        Intro->setWindowTitle(QCoreApplication::translate("Intro", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\275\277\347\224\250\350\257\264\346\230\216\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\254\350\275\257\344\273\266\346\217"
                        "\220\344\276\233\344\270\244\347\247\215\345\212\237\350\203\275\357\274\232\350\203\214\345\215\225\350\257\215\344\270\216\350\256\260\345\277\206\350\257\215\346\240\271\350\257\215\347\274\200</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\215\346\240\271\350\257\215\347\274\200\344\275\277\347\224\250\346\226\271\346\263\225\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\200\343\200\201\345\217\257\344\276\233\351\200\211\346\213\251\347\232\204\350\257\215\346\200\247\346\234\211 (n.) (v.) (a.) (pr"
                        "ep.) (pron.)</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\272\214\343\200\201\342\200\234\350\257\215\346\240\271/\350\213\261\346\226\207\350\247\243\351\207\212\342\200\235\347\255\224\346\241\210\351\200\211\350\207\252\350\257\215\346\240\271\350\241\250\342\200\234Roots, Prefixes and Suffixes\342\200\235</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\211\343\200\201\345\241\253\345\206\231\347\244\272\344\276\213</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\">                 alien</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\215\346\200\247\357\274\232a.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\215\346\240\271\357\274\232alter/ali</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\213\261\346\226\207\350\247\243\351\207\212\357\274\232other/to change</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Intro", "Tab 1", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("Intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\203\214\345\215\225\350\257\215\344\275\277\347\224\250\346\226\271\346\263\225\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\234"
                        "\213\345\210\260\344\270\255\346\226\207\346\204\217\346\200\235\345\220\216\345\241\253\347\233\270\345\272\224\347\232\204\345\215\225\350\257\215\357\274\214\347\255\224\345\256\214\345\220\216\344\274\232\346\230\276\347\244\272\346\255\243\347\241\256\347\255\224\346\241\210\357\274\214\347\255\224\345\256\214\345\220\216\344\274\232\346\230\276\347\244\272\346\255\243\347\241\256</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\216\207\357\274\214\345\217\257\344\273\245\347\202\271\345\207\273\351\207\215\346\226\260\345\274\200\345\247\213\351\207\215\346\226\260\350\203\214\345\215\225\350\257\215</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Intro", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Intro: public Ui_Intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRO_H
