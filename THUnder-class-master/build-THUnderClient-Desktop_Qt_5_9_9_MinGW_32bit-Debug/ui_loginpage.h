/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralwidget;
    QPushButton *b_login;
    QLabel *lbl_thunderclassroom;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *lbl_username;
    QLineEdit *le_username;
    QLabel *lbl_pswd;
    QLineEdit *le_pswd;
    QLineEdit *le_ip;
    QLabel *lbl_serverip;
    QLabel *lbl_pswdalert;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QStringLiteral("LoginPage"));
        LoginPage->resize(337, 587);
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        b_login = new QPushButton(centralwidget);
        b_login->setObjectName(QStringLiteral("b_login"));
        b_login->setGeometry(QRect(120, 410, 93, 28));
        lbl_thunderclassroom = new QLabel(centralwidget);
        lbl_thunderclassroom->setObjectName(QStringLiteral("lbl_thunderclassroom"));
        lbl_thunderclassroom->setGeometry(QRect(40, 80, 261, 81));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 200, 301, 110));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lbl_username = new QLabel(layoutWidget);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lbl_username);

        le_username = new QLineEdit(layoutWidget);
        le_username->setObjectName(QStringLiteral("le_username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_username);

        lbl_pswd = new QLabel(layoutWidget);
        lbl_pswd->setObjectName(QStringLiteral("lbl_pswd"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbl_pswd);

        le_pswd = new QLineEdit(layoutWidget);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));

        formLayout->setWidget(2, QFormLayout::FieldRole, le_pswd);

        le_ip = new QLineEdit(layoutWidget);
        le_ip->setObjectName(QStringLiteral("le_ip"));

        formLayout->setWidget(4, QFormLayout::FieldRole, le_ip);

        lbl_serverip = new QLabel(layoutWidget);
        lbl_serverip->setObjectName(QStringLiteral("lbl_serverip"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lbl_serverip);

        lbl_pswdalert = new QLabel(centralwidget);
        lbl_pswdalert->setObjectName(QStringLiteral("lbl_pswdalert"));
        lbl_pswdalert->setGeometry(QRect(20, 310, 301, 61));
        LoginPage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginPage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginPage->setStatusBar(statusbar);

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QApplication::translate("LoginPage", "LoginPage", Q_NULLPTR));
        b_login->setText(QApplication::translate("LoginPage", "Login", Q_NULLPTR));
        lbl_thunderclassroom->setText(QApplication::translate("LoginPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#0c1b71;\">Online Classroom</span></p></body></html>", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("LoginPage", "Username:", Q_NULLPTR));
        lbl_pswd->setText(QApplication::translate("LoginPage", "Password:", Q_NULLPTR));
        lbl_serverip->setText(QApplication::translate("LoginPage", "Server IP:", Q_NULLPTR));
        lbl_pswdalert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
