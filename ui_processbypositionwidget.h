/********************************************************************************
** Form generated from reading UI file 'processbypositionwidget.ui'
**
** Created: Wed 22. Aug 16:39:11 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSBYPOSITIONWIDGET_H
#define UI_PROCESSBYPOSITIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_processByPositionWidget
{
public:

    void setupUi(QWidget *processByPositionWidget)
    {
        if (processByPositionWidget->objectName().isEmpty())
            processByPositionWidget->setObjectName(QString::fromUtf8("processByPositionWidget"));
        processByPositionWidget->resize(706, 369);

        retranslateUi(processByPositionWidget);

        QMetaObject::connectSlotsByName(processByPositionWidget);
    } // setupUi

    void retranslateUi(QWidget *processByPositionWidget)
    {
        processByPositionWidget->setWindowTitle(QApplication::translate("processByPositionWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class processByPositionWidget: public Ui_processByPositionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSBYPOSITIONWIDGET_H
