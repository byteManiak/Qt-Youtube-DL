#include "qtdl.h"
#include "ui_qtdl.h"

QtDL::QtDL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtDL)
{
    ui->setupUi(this);
    ui->qualityBox->setCurrentIndex(4);
    ui->formatBox->setCurrentIndex(2);
    connect(ui->downloadButton, SIGNAL(pressed()), this, SLOT(download()));
    connect(ui->pathButton, SIGNAL(pressed()), this, SLOT(choosePath()));
    fileDialog.setFileMode(QFileDialog::Directory);
    fileDialog.setOption(QFileDialog::ShowDirsOnly);
}

void QtDL::choosePath()
{
    fileDialog.show();
    ui->path->setPlainText(fileDialog.directory().absolutePath());
}

void QtDL::download()
{
    if(ui->URL->toPlainText().isEmpty())
    {
        mes.setText("No URL specified!");
        mes.show();
        return;
    }
    if(ui->path->toPlainText().isEmpty())
    {
        mes.setText("No path specified!");
        mes.show();
        return;
    }
    std::string str = "youtube-dl ";
    str += "--extract-audio";
    str += " --audio-format " + ui->formatBox->currentText().toLower().toStdString();
    str += " --audio-quality " + ui->qualityBox->currentText().toStdString();
    str += " " + ui->URL->toPlainText().toStdString();
    str += " -o \"" + ui->path->toPlainText().toStdString() + "/%(title)s.%(ext)s\"";
    std::cout << str << '\n';
    if(!system(str.c_str()))
    {
        mes.setText("Download successful!");
        mes.show();
    }
}

QtDL::~QtDL()
{
    delete ui;
}
