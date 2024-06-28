#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QDialog>
#include <wordloader1.h>
namespace Ui {
class mainwindow1;
}

class mainwindow1 : public QDialog
{
    Q_OBJECT

public:
    explicit mainwindow1(QWidget *parent = nullptr);
    ~mainwindow1();
private slots:
    void on_confirmButton_clicked();

    void on_nextButton_clicked();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void back();
private:
    Ui::mainwindow1 *ui;
    WordLoader1 wl1;
    std::vector<int> arr; //题目编号数组
    int id; //当前题目编号
    int correct_num; //回答正确题数
    void nextWord();
    void newTest();
};

#endif // MAINWINDOW1_H
