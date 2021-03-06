#ifndef ADMIN_H
#define ADMIN_H
#include <QMessageBox>
#include <QMainWindow>
#include <QFile>
#include <QString>
#include <QVector>
#include <editprofile.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Admin; }
QT_END_NAMESPACE

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Admin *ui;
    QVector<QString>vecAdmin;
    int index;
};
#endif // ADMIN_H
