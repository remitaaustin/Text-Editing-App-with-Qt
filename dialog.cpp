#include "dialog.h"
#include "ui_dialog.h"
#include "QScrollArea"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QPixmap pm(":/images/resume.jpg");
    ui->label->setPixmap(pm);
    ui->label->setScaledContents(true);
    QScrollArea *scrollarea = new QScrollArea(this);
    scrollarea->setBackgroundRole(QPalette :: Dark);
    scrollarea->setWidget(ui->label);
}

Dialog::~Dialog()
{
    delete ui;
}
