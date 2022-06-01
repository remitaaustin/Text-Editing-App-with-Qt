#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionBold_triggered(bool checked)
{
    checked ? ui->textEdit->setFontWeight(QFont::Bold) :
              ui->textEdit->setFontWeight(QFont::Normal);
}

void MainWindow::on_actionSuperscript_triggered(bool checked)
{
    QTextCharFormat format;
    if(checked)
    {
        ui->actionSubscript->setChecked(false);
        format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    }
    else
    {
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    }
    ui->textEdit->textCursor().mergeCharFormat(format);
    ui -> textEdit -> mergeCurrentCharFormat(format);
}

void MainWindow::on_actionSubscript_triggered(bool checked)
{
    QTextCharFormat format;
        if(checked)
        {
            ui->actionSuperscript->setChecked(false);
            format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
        }
        else
        {
            format.setVerticalAlignment(QTextCharFormat::AlignNormal);
        }
        ui->textEdit->textCursor().mergeCharFormat(format);
        ui -> textEdit -> mergeCurrentCharFormat(format);
}

void MainWindow::on_pushButton_clicked()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}
