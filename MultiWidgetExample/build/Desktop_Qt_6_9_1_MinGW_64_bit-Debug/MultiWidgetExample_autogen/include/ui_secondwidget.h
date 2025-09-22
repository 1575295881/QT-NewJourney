/********************************************************************************
** Form generated from reading UI file 'secondwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWIDGET_H
#define UI_SECONDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *SecondWidget)
    {
        if (SecondWidget->objectName().isEmpty())
            SecondWidget->setObjectName("SecondWidget");
        SecondWidget->resize(400, 300);
        label = new QLabel(SecondWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 90, 121, 31));

        retranslateUi(SecondWidget);

        QMetaObject::connectSlotsByName(SecondWidget);
    } // setupUi

    void retranslateUi(QWidget *SecondWidget)
    {
        SecondWidget->setWindowTitle(QCoreApplication::translate("SecondWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SecondWidget", "Open Second Widget!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWidget: public Ui_SecondWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWIDGET_H
