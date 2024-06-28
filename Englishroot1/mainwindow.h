#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "wordloader.h"
#include "mainwindow1.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_confirmButton_clicked();

    void on_startButton_clicked();

    void on_nextButton_clicked();

    void on_IntroButton_clicked();

    void on_testButton_clicked();

private:
    Ui::MainWindow *ui;
    WordLoader wl;
    std::vector<int> arr; //题目编号数组
    int id; //当前题目编号
    int correct_num; //回答正确题数
    int num;
    char start, end;
    mainwindow1 * page;
    void getStringList(QString sep, QString str, QStringList &list);
    void nextWord();
    void newTest();
};
#endif // MAINWINDOW_H
