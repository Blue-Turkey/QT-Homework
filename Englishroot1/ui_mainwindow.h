/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QFrame *frame;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *leftVLayout;
    QLabel *idlabel;
    QLabel *wordLabel;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit1;
    QLabel *label_3;
    QLineEdit *lineEdit2;
    QLabel *label_4;
    QLineEdit *lineEdit3;
    QLabel *infolabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirmButton;
    QPushButton *nextButton;
    QPushButton *IntroButton;
    QPushButton *startButton;
    QPushButton *testButton;
    QLabel *statusLabel;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/R-C.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(600, 0, 20, 600));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 600, 600));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(50, 30, 501, 531));
        leftVLayout = new QVBoxLayout(verticalLayoutWidget_2);
        leftVLayout->setObjectName("leftVLayout");
        leftVLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        leftVLayout->setContentsMargins(0, 0, 0, 0);
        idlabel = new QLabel(verticalLayoutWidget_2);
        idlabel->setObjectName("idlabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(12);
        idlabel->setFont(font);

        leftVLayout->addWidget(idlabel, 0, Qt::AlignHCenter);

        wordLabel = new QLabel(verticalLayoutWidget_2);
        wordLabel->setObjectName("wordLabel");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(36);
        wordLabel->setFont(font1);

        leftVLayout->addWidget(wordLabel, 0, Qt::AlignHCenter);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(20);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Adobe Devanagari")});
        font2.setPointSize(14);
        label_2->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit1 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit1->setObjectName("lineEdit1");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(lineEdit1->sizePolicy().hasHeightForWidth());
        lineEdit1->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(14);
        lineEdit1->setFont(font3);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit1);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit2->setObjectName("lineEdit2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(lineEdit2->sizePolicy().hasHeightForWidth());
        lineEdit2->setSizePolicy(sizePolicy2);
        lineEdit2->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit2);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit3 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit3->setObjectName("lineEdit3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit3->sizePolicy().hasHeightForWidth());
        lineEdit3->setSizePolicy(sizePolicy3);
        lineEdit3->setFont(font3);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit3);


        leftVLayout->addLayout(formLayout);

        infolabel = new QLabel(verticalLayoutWidget_2);
        infolabel->setObjectName("infolabel");
        infolabel->setFont(font);
        infolabel->setStyleSheet(QString::fromUtf8(""));

        leftVLayout->addWidget(infolabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        confirmButton = new QPushButton(verticalLayoutWidget_2);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setFont(font);

        horizontalLayout->addWidget(confirmButton, 0, Qt::AlignHCenter);

        nextButton = new QPushButton(verticalLayoutWidget_2);
        nextButton->setObjectName("nextButton");
        nextButton->setFont(font);

        horizontalLayout->addWidget(nextButton, 0, Qt::AlignHCenter);


        leftVLayout->addLayout(horizontalLayout);

        leftVLayout->setStretch(1, 1);
        leftVLayout->setStretch(2, 1);
        leftVLayout->setStretch(3, 2);
        IntroButton = new QPushButton(centralwidget);
        IntroButton->setObjectName("IntroButton");
        IntroButton->setGeometry(QRect(650, 300, 111, 41));
        IntroButton->setFont(font);
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(650, 20, 111, 41));
        startButton->setFont(font);
        testButton = new QPushButton(centralwidget);
        testButton->setObjectName("testButton");
        testButton->setGeometry(QRect(650, 80, 111, 41));
        testButton->setFont(font);
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(630, 120, 160, 160));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font4.setPointSize(11);
        statusLabel->setFont(font4);
        statusLabel->setStyleSheet(QString::fromUtf8("border-image: url(:/R-C-2.jpg);"));
        MainWindow->setCentralWidget(centralwidget);
        testButton->raise();
        line->raise();
        frame->raise();
        IntroButton->raise();
        startButton->raise();
        statusLabel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        idlabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        wordLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\257\215\346\200\247", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\257\215\346\240\271", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207\350\247\243\351\207\212", nullptr));
        infolabel->setText(QString());
        confirmButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\242\230", nullptr));
        IntroButton->setText(QCoreApplication::translate("MainWindow", "\350\257\264\346\230\216", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\350\257\215\346\240\271\350\257\215\347\274\200", nullptr));
        testButton->setText(QCoreApplication::translate("MainWindow", "\345\215\225\350\257\215\351\273\230\345\206\231", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
