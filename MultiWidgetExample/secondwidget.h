#ifndef SECONDWIDGET_H
#define SECONDWIDGET_H

#include <QWidget>

namespace Ui {
class SecondWidget;
}

class SecondWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SecondWidget(QWidget *parent = nullptr);
    ~SecondWidget();

private:
    Ui::SecondWidget *ui;
};

#endif // SECONDWIDGET_H
