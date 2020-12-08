/********************************************************************************
** Form generated from reading UI file 'ansprobwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSPROBWINDOW_H
#define UI_ANSPROBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnsProbWindow
{
public:
    QLabel *lbl_single_multiple;
    QPushButton *b_send;
    QTextBrowser *tb_prob;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *cb_a;
    QCheckBox *cb_b;
    QCheckBox *cb_c;
    QTextBrowser *tb_d;
    QCheckBox *cb_d;
    QTextBrowser *tb_c;
    QTextBrowser *tb_b;
    QTextBrowser *tb_a_2;
    QLabel *lbl_prob;

    void setupUi(QWidget *AnsProbWindow)
    {
        if (AnsProbWindow->objectName().isEmpty())
            AnsProbWindow->setObjectName(QStringLiteral("AnsProbWindow"));
        AnsProbWindow->resize(754, 641);
        lbl_single_multiple = new QLabel(AnsProbWindow);
        lbl_single_multiple->setObjectName(QStringLiteral("lbl_single_multiple"));
        lbl_single_multiple->setGeometry(QRect(30, 591, 280, 16));
        b_send = new QPushButton(AnsProbWindow);
        b_send->setObjectName(QStringLiteral("b_send"));
        b_send->setGeometry(QRect(600, 591, 129, 28));
        tb_prob = new QTextBrowser(AnsProbWindow);
        tb_prob->setObjectName(QStringLiteral("tb_prob"));
        tb_prob->setGeometry(QRect(30, 51, 699, 291));
        layoutWidget = new QWidget(AnsProbWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(39, 359, 681, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cb_a = new QCheckBox(layoutWidget);
        cb_a->setObjectName(QStringLiteral("cb_a"));

        gridLayout->addWidget(cb_a, 0, 0, 1, 1);

        cb_b = new QCheckBox(layoutWidget);
        cb_b->setObjectName(QStringLiteral("cb_b"));

        gridLayout->addWidget(cb_b, 0, 2, 1, 1);

        cb_c = new QCheckBox(layoutWidget);
        cb_c->setObjectName(QStringLiteral("cb_c"));

        gridLayout->addWidget(cb_c, 1, 0, 1, 1);

        tb_d = new QTextBrowser(layoutWidget);
        tb_d->setObjectName(QStringLiteral("tb_d"));

        gridLayout->addWidget(tb_d, 1, 3, 1, 1);

        cb_d = new QCheckBox(layoutWidget);
        cb_d->setObjectName(QStringLiteral("cb_d"));

        gridLayout->addWidget(cb_d, 1, 2, 1, 1);

        tb_c = new QTextBrowser(layoutWidget);
        tb_c->setObjectName(QStringLiteral("tb_c"));

        gridLayout->addWidget(tb_c, 1, 1, 1, 1);

        tb_b = new QTextBrowser(layoutWidget);
        tb_b->setObjectName(QStringLiteral("tb_b"));

        gridLayout->addWidget(tb_b, 0, 3, 1, 1);

        tb_a_2 = new QTextBrowser(layoutWidget);
        tb_a_2->setObjectName(QStringLiteral("tb_a_2"));

        gridLayout->addWidget(tb_a_2, 0, 1, 1, 1);

        lbl_prob = new QLabel(AnsProbWindow);
        lbl_prob->setObjectName(QStringLiteral("lbl_prob"));
        lbl_prob->setGeometry(QRect(30, 30, 56, 16));

        retranslateUi(AnsProbWindow);

        QMetaObject::connectSlotsByName(AnsProbWindow);
    } // setupUi

    void retranslateUi(QWidget *AnsProbWindow)
    {
        AnsProbWindow->setWindowTitle(QApplication::translate("AnsProbWindow", "Form", Q_NULLPTR));
        lbl_single_multiple->setText(QApplication::translate("AnsProbWindow", "The problem has ONE correct answer!", Q_NULLPTR));
        b_send->setText(QApplication::translate("AnsProbWindow", "Send the answer", Q_NULLPTR));
        cb_a->setText(QApplication::translate("AnsProbWindow", "A", Q_NULLPTR));
        cb_b->setText(QApplication::translate("AnsProbWindow", "B", Q_NULLPTR));
        cb_c->setText(QApplication::translate("AnsProbWindow", "C", Q_NULLPTR));
        cb_d->setText(QApplication::translate("AnsProbWindow", "D", Q_NULLPTR));
        lbl_prob->setText(QApplication::translate("AnsProbWindow", "Problem", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnsProbWindow: public Ui_AnsProbWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSPROBWINDOW_H
