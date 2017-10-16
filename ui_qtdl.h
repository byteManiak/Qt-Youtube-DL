/********************************************************************************
** Form generated from reading UI file 'qtdl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDL_H
#define UI_QTDL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDL
{
public:
    QWidget *centralWidget;
    QPushButton *downloadButton;
    QPushButton *quitButton;
    QPlainTextEdit *URL;
    QLabel *labelURL;
    QLabel *labelQuality;
    QComboBox *qualityBox;
    QLabel *labelFormat;
    QComboBox *formatBox;
    QLabel *labelPath;
    QPlainTextEdit *path;
    QPushButton *pathButton;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QtDL)
    {
        if (QtDL->objectName().isEmpty())
            QtDL->setObjectName(QStringLiteral("QtDL"));
        QtDL->resize(400, 300);
        centralWidget = new QWidget(QtDL);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        downloadButton = new QPushButton(centralWidget);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setGeometry(QRect(180, 250, 101, 27));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(290, 250, 101, 27));
        URL = new QPlainTextEdit(centralWidget);
        URL->setObjectName(QStringLiteral("URL"));
        URL->setGeometry(QRect(10, 30, 381, 31));
        labelURL = new QLabel(centralWidget);
        labelURL->setObjectName(QStringLiteral("labelURL"));
        labelURL->setGeometry(QRect(10, 0, 381, 19));
        labelQuality = new QLabel(centralWidget);
        labelQuality->setObjectName(QStringLiteral("labelQuality"));
        labelQuality->setGeometry(QRect(10, 140, 81, 19));
        qualityBox = new QComboBox(centralWidget);
        qualityBox->setObjectName(QStringLiteral("qualityBox"));
        qualityBox->setGeometry(QRect(10, 170, 85, 29));
        labelFormat = new QLabel(centralWidget);
        labelFormat->setObjectName(QStringLiteral("labelFormat"));
        labelFormat->setGeometry(QRect(110, 140, 81, 19));
        formatBox = new QComboBox(centralWidget);
        formatBox->setObjectName(QStringLiteral("formatBox"));
        formatBox->setGeometry(QRect(110, 170, 85, 29));
        labelPath = new QLabel(centralWidget);
        labelPath->setObjectName(QStringLiteral("labelPath"));
        labelPath->setGeometry(QRect(10, 70, 381, 19));
        path = new QPlainTextEdit(centralWidget);
        path->setObjectName(QStringLiteral("path"));
        path->setGeometry(QRect(10, 100, 271, 31));
        pathButton = new QPushButton(centralWidget);
        pathButton->setObjectName(QStringLiteral("pathButton"));
        pathButton->setGeometry(QRect(290, 100, 101, 27));
        QtDL->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QtDL);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtDL->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(QtDL);
        QObject::connect(quitButton, SIGNAL(clicked()), QtDL, SLOT(close()));

        QMetaObject::connectSlotsByName(QtDL);
    } // setupUi

    void retranslateUi(QMainWindow *QtDL)
    {
        QtDL->setWindowTitle(QApplication::translate("QtDL", "QtDL", Q_NULLPTR));
        downloadButton->setText(QApplication::translate("QtDL", "Download", Q_NULLPTR));
        quitButton->setText(QApplication::translate("QtDL", "Quit", Q_NULLPTR));
        labelURL->setText(QApplication::translate("QtDL", "Enter YouTube URL here:", Q_NULLPTR));
        labelQuality->setText(QApplication::translate("QtDL", "Quality", Q_NULLPTR));
        qualityBox->clear();
        qualityBox->insertItems(0, QStringList()
         << QApplication::translate("QtDL", "64k", Q_NULLPTR)
         << QApplication::translate("QtDL", "96k", Q_NULLPTR)
         << QApplication::translate("QtDL", "128k", Q_NULLPTR)
         << QApplication::translate("QtDL", "160k", Q_NULLPTR)
         << QApplication::translate("QtDL", "192k", Q_NULLPTR)
         << QApplication::translate("QtDL", "228k", Q_NULLPTR)
         << QApplication::translate("QtDL", "256k", Q_NULLPTR)
         << QApplication::translate("QtDL", "288k", Q_NULLPTR)
         << QApplication::translate("QtDL", "320k", Q_NULLPTR)
        );
        labelFormat->setText(QApplication::translate("QtDL", "Format", Q_NULLPTR));
        formatBox->clear();
        formatBox->insertItems(0, QStringList()
         << QApplication::translate("QtDL", "AAC", Q_NULLPTR)
         << QApplication::translate("QtDL", "FLAC", Q_NULLPTR)
         << QApplication::translate("QtDL", "MP3", Q_NULLPTR)
         << QApplication::translate("QtDL", "M4A", Q_NULLPTR)
         << QApplication::translate("QtDL", "Opus", Q_NULLPTR)
         << QApplication::translate("QtDL", "Vorbis", Q_NULLPTR)
         << QApplication::translate("QtDL", "WAV", Q_NULLPTR)
        );
        labelPath->setText(QApplication::translate("QtDL", "Output folder", Q_NULLPTR));
        pathButton->setText(QApplication::translate("QtDL", "Choose...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtDL: public Ui_QtDL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDL_H
