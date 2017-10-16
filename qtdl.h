#ifndef QTDL_H
#define QTDL_H

#include <iostream>
#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
class QtDL;
}

class QtDL : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtDL(QWidget *parent = 0);
    ~QtDL();

public slots:
    void download();
    void choosePath();

private:
    QMessageBox mes;
    QFileDialog fileDialog;
    Ui::QtDL *ui;
};

#endif // QTDL_H
