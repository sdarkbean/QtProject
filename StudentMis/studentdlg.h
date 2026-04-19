#ifndef STUDENTDLG_H
#define STUDENTDLG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentDlg; }
QT_END_NAMESPACE

class StudentDlg : public QDialog
{
    Q_OBJECT

public:
    StudentDlg(QWidget *parent = nullptr);
    ~StudentDlg();

private:
    Ui::StudentDlg *ui;
};
#endif // STUDENTDLG_H
