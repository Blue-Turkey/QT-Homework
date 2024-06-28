#include "testdialog.h"
#include "ui_testdialog.h"

TestDialog::TestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestDialog)
{
    ui->setupUi(this);
    ui->spinBox->setRange(1, 100);
    ui->lineEdit->setPlaceholderText("例：a-z或A-Z");
    ui->lineEdit->adjustSize();
}


TestDialog::~TestDialog()
{
    delete ui;
}

void TestDialog::accept()
{
    if(isLegalRange())
        QDialog::accept();
    else
    {
        ui->lineEdit->setText("");
        ui->lineEdit->setPlaceholderText("输入格式错误");
    }
}

bool TestDialog::isLegalRange()
{
    QString text = ui->lineEdit->text();
    return text.length() == 3 && text[0].isLetter() && text[1] == '-' && text[2].isLetter() && text[0] <= text[2];
}

void TestDialog::getRange(char &start, char &end)
{
    QString text = ui->lineEdit->text();
    start = text[0].toLower().toLatin1();
    end = text[2].toLower().toLatin1();
}

int TestDialog::getNum()
{
    return ui->spinBox->value();
}

void TestDialog::on_lineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    ui->lineEdit->setPlaceholderText("例：a-z或A-Z");
}
