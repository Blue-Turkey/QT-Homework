#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#define num 10 //默写题数
mainwindow1::mainwindow1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainwindow1)
{
    ui->setupUi(this);
    newTest();
}

mainwindow1::~mainwindow1()
{
    delete ui;
}


void mainwindow1::on_confirmButton_clicked()
{
    QString word_ans = wl1.getWord(arr[id]).simplified();
    QString meaning = wl1.getMeaning(arr[id]);
    QStringList word_list;
    QString word = ui->lineEdit->text().simplified();
    bool flag1 = (word_ans == word);
    QString info = "";
    if(!flag1)
    {
        info += ("英语单词默写错误，正确答案为：" + word_ans + "\n");
    }
    if(flag1)
    {
        info += "回答正确！";
        correct_num++;
    }
    ui->infolabel->setText(info);

    if(id < num - 1)
    {
        ui->nextButton->setEnabled(true);
        ui->confirmButton->setEnabled(false);
    }
    else //测试结束
    {
        ui->confirmButton->setEnabled(false);
        ui->nextButton->setEnabled(false);
        QString status = QString::asprintf("正确：%d\n错误：%d\n正确率：%.1lf%%", correct_num, num - correct_num, (double)correct_num / num * 100);
        ui->statusLabel->setText(status);
    }

}

void mainwindow1::newTest()
{
    wl1.getTestIndex(num, arr);
    ui->statusLabel->clear();
    ui->wordLabel->setText(wl1.getMeaning(arr[id]));
    id = 0, correct_num = 0;
    nextWord();
}

void mainwindow1::on_nextButton_clicked()
{
    id++;
    nextWord();
}

void mainwindow1::nextWord()
{
    ui->wordLabel->setText(wl1.getMeaning(arr[id]));
    ui->nextButton->setEnabled(false);
    ui->confirmButton->setEnabled(true);
    ui->lineEdit->clear();
    ui->infolabel->clear();
    ui->idlabel->setText(QString::asprintf("当前题目：%d/%d", id + 1, num));
}

void mainwindow1::on_pushButton_clicked()
{
    emit this->back();

}


void mainwindow1::on_pushButton_2_clicked()
{
    newTest();
}

