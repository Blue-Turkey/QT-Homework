#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QCloseEvent>

namespace Ui {
class TestDialog;
}

class TestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TestDialog(QWidget *parent = nullptr);
    ~TestDialog();
    virtual void accept();
    void getRange(char &start, char &end); //获取出题范围
    int getNum(); //获取出题数目

private slots:
    //void on_buttonBox_accepted();


    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::TestDialog *ui;
    bool isLegalRange();
};



#endif // TESTDIALOG_H
