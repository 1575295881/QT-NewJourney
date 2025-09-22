#include "secondwidget.h"
#include "ui_secondwidget.h"

SecondWidget::SecondWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SecondWidget)
{
    ui->setupUi(this);
    setWindowTitle("Second Widget");
}

SecondWidget::~SecondWidget()
{
    delete ui;
}
