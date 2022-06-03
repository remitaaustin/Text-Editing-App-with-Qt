#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    mFilename = "";
    ui->textEdit->setPlainText("");
}

void MainWindow::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this,"Open a file");
    if(!file.isEmpty())
    {
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text))
        {
            mFilename = file;
            QTextStream in(&sFile);
            QString text = in.readAll();
            sFile.close();
            ui->textEdit->setPlainText(text);
        }
    }
}

void MainWindow::on_actionSave_triggered()
{
    if(mFilename=="")
    {
        on_actionSave_As_triggered();
        return;
    }
    QFile sFile(mFilename);
    if(sFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out(&sFile);
        out << ui->textEdit->toPlainText();
        sFile.flush();
        sFile.close();
    }
}

void MainWindow::on_actionSave_As_triggered()
{
    QString file = QFileDialog::getSaveFileName(this,"Open a file");
    if(!file.isEmpty())
    {
        mFilename = file;
        on_actionSave_triggered();
    }
}

void MainWindow::on_actionBold_triggered(bool checked)
{
    checked ? ui->textEdit->setFontWeight(QFont::Bold) :
              ui->textEdit->setFontWeight(QFont::Normal);
}

void MainWindow::on_actionItalic_triggered(bool checked)
{
    QTextCharFormat format;
    if(checked)
    {
        ui->textEdit->setFontItalic(checked);;
    }
    else
    {
        ui->textEdit->setFontItalic(checked);
    }
    ui->textEdit->textCursor().mergeCharFormat(format);
    ui->textEdit->mergeCurrentCharFormat(format);
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

void MainWindow::on_actionAbout_Me_triggered()
{
    Dialog dbox;
    dbox.setModal(true);
    dbox.exec();
}
