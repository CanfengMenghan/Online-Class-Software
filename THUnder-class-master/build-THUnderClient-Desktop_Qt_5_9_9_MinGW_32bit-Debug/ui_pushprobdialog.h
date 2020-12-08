/********************************************************************************
** Form generated from reading UI file 'pushprobdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHPROBDIALOG_H
#define UI_PUSHPROBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PushProbDialog
{
public:
    QFrame *line;
    QTableWidget *tbl_result;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lbl_prob;
    QLabel *label_3;
    QTextEdit *te_prob;
    QLabel *label_2;
    QLabel *label_4;
    QCheckBox *cb_a;
    QPlainTextEdit *te_a;
    QCheckBox *cb_b;
    QCheckBox *cb_c;
    QPlainTextEdit *te_c;
    QCheckBox *cb_d;
    QPlainTextEdit *te_d;
    QPlainTextEdit *te_b;
    QPushButton *b_push;
    QPushButton *b_pull;
    QLabel *label_5;
    QTableWidget *tbl_result_2;

    void setupUi(QDialog *PushProbDialog)
    {
        if (PushProbDialog->objectName().isEmpty())
            PushProbDialog->setObjectName(QStringLiteral("PushProbDialog"));
        PushProbDialog->resize(1096, 499);
        line = new QFrame(PushProbDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(620, 10, 20, 471));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tbl_result = new QTableWidget(PushProbDialog);
        if (tbl_result->columnCount() < 2)
            tbl_result->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbl_result->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbl_result->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tbl_result->rowCount() < 4)
            tbl_result->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbl_result->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbl_result->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tbl_result->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tbl_result->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(1, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(2, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(3, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tbl_result->setItem(3, 1, __qtablewidgetitem13);
        tbl_result->setObjectName(QStringLiteral("tbl_result"));
        tbl_result->setGeometry(QRect(650, 30, 421, 191));
        tbl_result->setSortingEnabled(true);
        layoutWidget = new QWidget(PushProbDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 602, 471));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbl_prob = new QLabel(layoutWidget);
        lbl_prob->setObjectName(QStringLiteral("lbl_prob"));

        gridLayout->addWidget(lbl_prob, 0, 0, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        te_prob = new QTextEdit(layoutWidget);
        te_prob->setObjectName(QStringLiteral("te_prob"));

        gridLayout->addWidget(te_prob, 2, 0, 1, 4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 3);

        cb_a = new QCheckBox(layoutWidget);
        cb_a->setObjectName(QStringLiteral("cb_a"));

        gridLayout->addWidget(cb_a, 5, 0, 1, 1);

        te_a = new QPlainTextEdit(layoutWidget);
        te_a->setObjectName(QStringLiteral("te_a"));

        gridLayout->addWidget(te_a, 5, 1, 1, 1);

        cb_b = new QCheckBox(layoutWidget);
        cb_b->setObjectName(QStringLiteral("cb_b"));

        gridLayout->addWidget(cb_b, 5, 2, 1, 1);

        cb_c = new QCheckBox(layoutWidget);
        cb_c->setObjectName(QStringLiteral("cb_c"));

        gridLayout->addWidget(cb_c, 6, 0, 1, 1);

        te_c = new QPlainTextEdit(layoutWidget);
        te_c->setObjectName(QStringLiteral("te_c"));

        gridLayout->addWidget(te_c, 6, 1, 1, 1);

        cb_d = new QCheckBox(layoutWidget);
        cb_d->setObjectName(QStringLiteral("cb_d"));

        gridLayout->addWidget(cb_d, 6, 2, 1, 1);

        te_d = new QPlainTextEdit(layoutWidget);
        te_d->setObjectName(QStringLiteral("te_d"));

        gridLayout->addWidget(te_d, 6, 3, 1, 1);

        te_b = new QPlainTextEdit(layoutWidget);
        te_b->setObjectName(QStringLiteral("te_b"));

        gridLayout->addWidget(te_b, 5, 3, 1, 1);

        b_push = new QPushButton(layoutWidget);
        b_push->setObjectName(QStringLiteral("b_push"));

        gridLayout->addWidget(b_push, 0, 3, 1, 1);

        b_pull = new QPushButton(layoutWidget);
        b_pull->setObjectName(QStringLiteral("b_pull"));

        gridLayout->addWidget(b_pull, 1, 3, 1, 1);

        label_5 = new QLabel(PushProbDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(650, 0, 297, 28));
        tbl_result_2 = new QTableWidget(PushProbDialog);
        if (tbl_result_2->columnCount() < 3)
            tbl_result_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tbl_result_2->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tbl_result_2->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tbl_result_2->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        tbl_result_2->setObjectName(QStringLiteral("tbl_result_2"));
        tbl_result_2->setGeometry(QRect(650, 240, 421, 231));
        tbl_result_2->setSortingEnabled(true);

        retranslateUi(PushProbDialog);

        QMetaObject::connectSlotsByName(PushProbDialog);
    } // setupUi

    void retranslateUi(QDialog *PushProbDialog)
    {
        PushProbDialog->setWindowTitle(QApplication::translate("PushProbDialog", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tbl_result->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PushProbDialog", "students", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tbl_result->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PushProbDialog", "number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tbl_result->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("PushProbDialog", "A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tbl_result->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("PushProbDialog", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tbl_result->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("PushProbDialog", "C", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tbl_result->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("PushProbDialog", "D", Q_NULLPTR));

        const bool __sortingEnabled = tbl_result->isSortingEnabled();
        tbl_result->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tbl_result->item(0, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("PushProbDialog", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tbl_result->item(1, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("PushProbDialog", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tbl_result->item(2, 1);
        ___qtablewidgetitem8->setText(QApplication::translate("PushProbDialog", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tbl_result->item(3, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("PushProbDialog", "0", Q_NULLPTR));
        tbl_result->setSortingEnabled(__sortingEnabled);

        lbl_prob->setText(QApplication::translate("PushProbDialog", "Problem", Q_NULLPTR));
        label_3->setText(QApplication::translate("PushProbDialog", "(Please enter the problem below)", Q_NULLPTR));
        label_2->setText(QApplication::translate("PushProbDialog", "Answer", Q_NULLPTR));
        label_4->setText(QApplication::translate("PushProbDialog", "(Please toggle the right answer(s) below)", Q_NULLPTR));
        cb_a->setText(QApplication::translate("PushProbDialog", "A", Q_NULLPTR));
        cb_b->setText(QApplication::translate("PushProbDialog", "B", Q_NULLPTR));
        cb_c->setText(QApplication::translate("PushProbDialog", "C", Q_NULLPTR));
        cb_d->setText(QApplication::translate("PushProbDialog", "D", Q_NULLPTR));
        b_push->setText(QApplication::translate("PushProbDialog", "Push", Q_NULLPTR));
        b_pull->setText(QApplication::translate("PushProbDialog", "Pull", Q_NULLPTR));
        label_5->setText(QApplication::translate("PushProbDialog", "Result", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tbl_result_2->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("PushProbDialog", "student", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tbl_result_2->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("PushProbDialog", "options", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tbl_result_2->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("PushProbDialog", "time", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PushProbDialog: public Ui_PushProbDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHPROBDIALOG_H
