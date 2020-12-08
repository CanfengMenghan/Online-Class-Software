/********************************************************************************
** Form generated from reading UI file 'recordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDWINDOW_H
#define UI_RECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordWindow
{
public:
    QLabel *label;
    QTableWidget *tbl;

    void setupUi(QWidget *RecordWindow)
    {
        if (RecordWindow->objectName().isEmpty())
            RecordWindow->setObjectName(QStringLiteral("RecordWindow"));
        RecordWindow->resize(671, 732);
        label = new QLabel(RecordWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 141, 16));
        tbl = new QTableWidget(RecordWindow);
        if (tbl->columnCount() < 4)
            tbl->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbl->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbl->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbl->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbl->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tbl->setObjectName(QStringLiteral("tbl"));
        tbl->setGeometry(QRect(20, 50, 631, 661));
        tbl->setSortingEnabled(true);

        retranslateUi(RecordWindow);

        QMetaObject::connectSlotsByName(RecordWindow);
    } // setupUi

    void retranslateUi(QWidget *RecordWindow)
    {
        RecordWindow->setWindowTitle(QApplication::translate("RecordWindow", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("RecordWindow", "Class Record", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tbl->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RecordWindow", "username", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tbl->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RecordWindow", "sign-in time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tbl->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("RecordWindow", "sign-out/offline time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tbl->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("RecordWindow", "attention ratio", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RecordWindow: public Ui_RecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDWINDOW_H
