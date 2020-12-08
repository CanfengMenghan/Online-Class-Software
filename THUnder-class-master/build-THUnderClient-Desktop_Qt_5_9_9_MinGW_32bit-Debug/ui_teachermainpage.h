/********************************************************************************
** Form generated from reading UI file 'teachermainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMAINPAGE_H
#define UI_TEACHERMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherMainPage
{
public:
    QLabel *label;
    QComboBox *cb_audiodevice;
    QPushButton *b_togglestate;
    QPushButton *b_sharescreen;
    QPushButton *b_pushprob;
    QPushButton *b_randcall;
    QLabel *lbl_called;
    QComboBox *cb_vidwindow;
    QLabel *label_2;

    void setupUi(QWidget *TeacherMainPage)
    {
        if (TeacherMainPage->objectName().isEmpty())
            TeacherMainPage->setObjectName(QStringLiteral("TeacherMainPage"));
        TeacherMainPage->resize(807, 176);
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        TeacherMainPage->setFont(font);
        label = new QLabel(TeacherMainPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 131, 16));
        cb_audiodevice = new QComboBox(TeacherMainPage);
        cb_audiodevice->setObjectName(QStringLiteral("cb_audiodevice"));
        cb_audiodevice->setGeometry(QRect(30, 50, 221, 21));
        b_togglestate = new QPushButton(TeacherMainPage);
        b_togglestate->setObjectName(QStringLiteral("b_togglestate"));
        b_togglestate->setGeometry(QRect(650, 40, 131, 31));
        b_sharescreen = new QPushButton(TeacherMainPage);
        b_sharescreen->setObjectName(QStringLiteral("b_sharescreen"));
        b_sharescreen->setGeometry(QRect(300, 40, 141, 31));
        b_pushprob = new QPushButton(TeacherMainPage);
        b_pushprob->setObjectName(QStringLiteral("b_pushprob"));
        b_pushprob->setGeometry(QRect(470, 40, 121, 31));
        b_randcall = new QPushButton(TeacherMainPage);
        b_randcall->setObjectName(QStringLiteral("b_randcall"));
        b_randcall->setGeometry(QRect(470, 120, 151, 31));
        lbl_called = new QLabel(TeacherMainPage);
        lbl_called->setObjectName(QStringLiteral("lbl_called"));
        lbl_called->setGeometry(QRect(470, 90, 72, 15));
        cb_vidwindow = new QComboBox(TeacherMainPage);
        cb_vidwindow->setObjectName(QStringLiteral("cb_vidwindow"));
        cb_vidwindow->setGeometry(QRect(30, 120, 221, 21));
        label_2 = new QLabel(TeacherMainPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 131, 16));

        retranslateUi(TeacherMainPage);

        QMetaObject::connectSlotsByName(TeacherMainPage);
    } // setupUi

    void retranslateUi(QWidget *TeacherMainPage)
    {
        TeacherMainPage->setWindowTitle(QApplication::translate("TeacherMainPage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TeacherMainPage", "Audio input", Q_NULLPTR));
        cb_audiodevice->clear();
        cb_audiodevice->insertItems(0, QStringList()
         << QApplication::translate("TeacherMainPage", "Default", Q_NULLPTR)
        );
        b_togglestate->setText(QApplication::translate("TeacherMainPage", "Class begin", Q_NULLPTR));
        b_sharescreen->setText(QApplication::translate("TeacherMainPage", "Share screen", Q_NULLPTR));
        b_pushprob->setText(QApplication::translate("TeacherMainPage", "Push problem", Q_NULLPTR));
        b_randcall->setText(QApplication::translate("TeacherMainPage", "Random roll call", Q_NULLPTR));
        lbl_called->setText(QString());
        cb_vidwindow->clear();
        cb_vidwindow->insertItems(0, QStringList()
         << QApplication::translate("TeacherMainPage", "Desktop", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("TeacherMainPage", "Shared screen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TeacherMainPage: public Ui_TeacherMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMAINPAGE_H
