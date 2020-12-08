/********************************************************************************
** Form generated from reading UI file 'adminmainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINPAGE_H
#define UI_ADMINMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMainPage
{
public:
    QFrame *line;
    QFrame *line_2;
    QRadioButton *rb_changepswd;
    QRadioButton *rb_changeusername;
    QLineEdit *le_delusername;
    QLineEdit *le_changeusername;
    QLineEdit *le_changeto;
    QLabel *label_4;
    QLabel *lbl_changewhat;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_add;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_del;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *b_change;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_add_alert;
    QLabel *lbl_del_alert;
    QLabel *lbl_change_alert;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *le_addusername;
    QLabel *label_8;
    QLineEdit *le_addpswd;
    QLabel *label_9;
    QComboBox *cb_type;

    void setupUi(QWidget *AdminMainPage)
    {
        if (AdminMainPage->objectName().isEmpty())
            AdminMainPage->setObjectName(QStringLiteral("AdminMainPage"));
        AdminMainPage->resize(961, 640);
        line = new QFrame(AdminMainPage);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(302, 181, 16, 399));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(AdminMainPage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(610, 180, 16, 399));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        rb_changepswd = new QRadioButton(AdminMainPage);
        rb_changepswd->setObjectName(QStringLiteral("rb_changepswd"));
        rb_changepswd->setGeometry(QRect(690, 220, 147, 19));
        rb_changeusername = new QRadioButton(AdminMainPage);
        rb_changeusername->setObjectName(QStringLiteral("rb_changeusername"));
        rb_changeusername->setGeometry(QRect(690, 259, 147, 19));
        le_delusername = new QLineEdit(AdminMainPage);
        le_delusername->setObjectName(QStringLiteral("le_delusername"));
        le_delusername->setGeometry(QRect(410, 330, 171, 21));
        le_changeusername = new QLineEdit(AdminMainPage);
        le_changeusername->setObjectName(QStringLiteral("le_changeusername"));
        le_changeusername->setGeometry(QRect(750, 329, 171, 21));
        le_changeto = new QLineEdit(AdminMainPage);
        le_changeto->setObjectName(QStringLiteral("le_changeto"));
        le_changeto->setGeometry(QRect(750, 380, 171, 21));
        label_4 = new QLabel(AdminMainPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(640, 329, 72, 16));
        lbl_changewhat = new QLabel(AdminMainPage);
        lbl_changewhat->setObjectName(QStringLiteral("lbl_changewhat"));
        lbl_changewhat->setGeometry(QRect(640, 380, 104, 16));
        label_6 = new QLabel(AdminMainPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(332, 330, 72, 16));
        layoutWidget = new QWidget(AdminMainPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 871, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        layoutWidget1 = new QWidget(AdminMainPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 540, 741, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        b_add = new QPushButton(layoutWidget1);
        b_add->setObjectName(QStringLiteral("b_add"));

        horizontalLayout_2->addWidget(b_add);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        b_del = new QPushButton(layoutWidget1);
        b_del->setObjectName(QStringLiteral("b_del"));

        horizontalLayout_2->addWidget(b_del);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        b_change = new QPushButton(layoutWidget1);
        b_change->setObjectName(QStringLiteral("b_change"));

        horizontalLayout_2->addWidget(b_change);

        widget = new QWidget(AdminMainPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 430, 941, 81));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_add_alert = new QLabel(widget);
        lbl_add_alert->setObjectName(QStringLiteral("lbl_add_alert"));

        horizontalLayout_3->addWidget(lbl_add_alert);

        lbl_del_alert = new QLabel(widget);
        lbl_del_alert->setObjectName(QStringLiteral("lbl_del_alert"));

        horizontalLayout_3->addWidget(lbl_del_alert);

        lbl_change_alert = new QLabel(widget);
        lbl_change_alert->setObjectName(QStringLiteral("lbl_change_alert"));

        horizontalLayout_3->addWidget(lbl_change_alert);

        widget1 = new QWidget(AdminMainPage);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 266, 251, 151));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        le_addusername = new QLineEdit(widget1);
        le_addusername->setObjectName(QStringLiteral("le_addusername"));

        gridLayout->addWidget(le_addusername, 0, 1, 1, 1);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        le_addpswd = new QLineEdit(widget1);
        le_addpswd->setObjectName(QStringLiteral("le_addpswd"));

        gridLayout->addWidget(le_addpswd, 1, 1, 1, 1);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        cb_type = new QComboBox(widget1);
        cb_type->setObjectName(QStringLiteral("cb_type"));

        gridLayout->addWidget(cb_type, 2, 1, 1, 1);


        retranslateUi(AdminMainPage);

        QMetaObject::connectSlotsByName(AdminMainPage);
    } // setupUi

    void retranslateUi(QWidget *AdminMainPage)
    {
        AdminMainPage->setWindowTitle(QApplication::translate("AdminMainPage", "Form", Q_NULLPTR));
        rb_changepswd->setText(QApplication::translate("AdminMainPage", "Change password", Q_NULLPTR));
        rb_changeusername->setText(QApplication::translate("AdminMainPage", "Change username", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        le_delusername->setToolTip(QApplication::translate("AdminMainPage", "<html><head/><body><p>Shouldn't contain ':' (colons).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        le_changeusername->setToolTip(QApplication::translate("AdminMainPage", "<html><head/><body><p>Shouldn't contain ':' (colons).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        le_changeto->setToolTip(QApplication::translate("AdminMainPage", "<html><head/><body><p>Shouldn't contain ':' (colons).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("AdminMainPage", "Username:", Q_NULLPTR));
        lbl_changewhat->setText(QApplication::translate("AdminMainPage", "New username:", Q_NULLPTR));
        label_6->setText(QApplication::translate("AdminMainPage", "Username:", Q_NULLPTR));
        label->setText(QApplication::translate("AdminMainPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Add a user</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminMainPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Delete a user</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminMainPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Change info</span></p></body></html>", Q_NULLPTR));
        b_add->setText(QApplication::translate("AdminMainPage", "Add", Q_NULLPTR));
        b_del->setText(QApplication::translate("AdminMainPage", "Delete", Q_NULLPTR));
        b_change->setText(QApplication::translate("AdminMainPage", "Apply Change", Q_NULLPTR));
        lbl_add_alert->setText(QApplication::translate("AdminMainPage", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        lbl_del_alert->setText(QApplication::translate("AdminMainPage", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        lbl_change_alert->setText(QApplication::translate("AdminMainPage", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("AdminMainPage", "Username:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        le_addusername->setToolTip(QApplication::translate("AdminMainPage", "<html><head/><body><p>Shouldn't contain ':' (colons).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("AdminMainPage", "Password:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        le_addpswd->setToolTip(QApplication::translate("AdminMainPage", "<html><head/><body><p>Shouldn't contain ':' (colons).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("AdminMainPage", "Identity:", Q_NULLPTR));
        cb_type->clear();
        cb_type->insertItems(0, QStringList()
         << QApplication::translate("AdminMainPage", "Student", Q_NULLPTR)
         << QApplication::translate("AdminMainPage", "Teacher", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class AdminMainPage: public Ui_AdminMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINPAGE_H
