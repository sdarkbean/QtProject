#include "studentdlg.h"
#include "ui_studentdlg.h"

StudentDlg::StudentDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentDlg)
{
    ui->setupUi(this);
}

StudentDlg::~StudentDlg()
{
    delete ui;
}

