#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testdialog.h"
#include "intro.h"
#include "mainwindow1.h"
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    setWindowTitle("背单词与词根词缀测试程序");
    ui->leftVLayout->setGeometry(QRect(100, 100, 400, 400)); //居中单词测试界面
    ui->frame->setHidden(true); //刚开始隐藏单词测试界面
    ui->infolabel->setWordWrap(true);
    this->page = new mainwindow1;
    connect(page,&mainwindow1::back,[=](){
        page->hide();
        this->show();
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_confirmButton_clicked()
{
    QString word = wl.getWord(arr[id]);
    QString wordclass_ans = wl.getWordClass(arr[id]);
    QString root_ans = wl.getRoot(arr[id]);
    QString meaning_ans = wl.getMeaning(arr[id]);
    QStringList wordclass_list, root_list, meaning_list;
    //将所有相邻的词性添加到list里
    for(int i = arr[id]; wl.getWord(i) == word; i++)
    {
        wordclass_list.push_back(wl.getWordClass(i));
    }
    for(int i = arr[id] - 1; wl.getWord(i) == word; i--)
    {
        wordclass_list.push_back(wl.getWordClass(i));
    }
    wl.getStringList(",", meaning_ans, meaning_list);
    wl.getStringList(",", root_ans, root_list);

    QString wordclass = ui->lineEdit1->text().simplified(); //词性
    QString root = ui->lineEdit2->text().simplified(); //词根
    QString meaning = ui->lineEdit3->text().simplified(); //词义

    bool flag1 = wordclass_list.contains(wordclass);
    bool flag2 = root_list.contains(root);
    bool flag3 = meaning_list.contains(meaning);
    QString info = "";
    if(!flag1)
    {
        info += ("词性回答错误，正确答案为：" + wordclass_ans + "\n");
    }
    if(!flag2)
    {
        info += ("词根回答错误，正确答案为：" + root_ans + "\n");
    }
    if(!flag3)
    {
        info += ("词性的英文解释回答错误，正确答案为：" + meaning_ans + "\n");
    }
    if(flag1 && flag2 && flag3)
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

void MainWindow::on_startButton_clicked()
{
    TestDialog td(this);
    if(td.exec())
    {
        td.getRange(start, end);
        num = td.getNum();
        wl.getTestIndex(num, start, end, arr);
        newTest();
    }
}

void MainWindow::on_nextButton_clicked()
{
    id++;
    nextWord();
}

void MainWindow::nextWord()
{
    ui->wordLabel->setText(wl.getWord(arr[id]));
    ui->nextButton->setEnabled(false);
    ui->confirmButton->setEnabled(true);
    ui->lineEdit1->clear();
    ui->lineEdit2->clear();
    ui->lineEdit3->clear();
    ui->infolabel->clear();
    ui->idlabel->setText(QString::asprintf("当前题目：%d/%d", id + 1, num));
}

void MainWindow::newTest()
{
    id = 0, correct_num = 0;
    ui->frame->setVisible(true);
    ui->statusLabel->clear();
    nextWord();
}

void MainWindow::on_IntroButton_clicked()
{
    Intro *newintro= new Intro;
    newintro->show();
}

void MainWindow::on_testButton_clicked()
{
    this->hide();
    this->page->show();
}

