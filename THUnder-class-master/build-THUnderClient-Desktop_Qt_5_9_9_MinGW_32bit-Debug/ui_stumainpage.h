/********************************************************************************
** Form generated from reading UI file 'stumainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUMAINPAGE_H
#define UI_STUMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuMainPage
{
public:
    QComboBox *cb_audiodevice;
    QLabel *label;
    QLabel *lbl_is_muted;
    QLabel *lbl_vid;

    void setupUi(QWidget *StuMainPage)
    {
        if (StuMainPage->objectName().isEmpty())
            StuMainPage->setObjectName(QStringLiteral("StuMainPage"));
        StuMainPage->resize(1305, 733);
        cb_audiodevice = new QComboBox(StuMainPage);
        cb_audiodevice->setObjectName(QStringLiteral("cb_audiodevice"));
        cb_audiodevice->setGeometry(QRect(10, 660, 131, 22));
        label = new QLabel(StuMainPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 640, 131, 16));
        lbl_is_muted = new QLabel(StuMainPage);
        lbl_is_muted->setObjectName(QStringLiteral("lbl_is_muted"));
        lbl_is_muted->setGeometry(QRect(10, 700, 181, 16));
        lbl_vid = new QLabel(StuMainPage);
        lbl_vid->setObjectName(QStringLiteral("lbl_vid"));
        lbl_vid->setGeometry(QRect(160, 30, 1121, 691));

        retranslateUi(StuMainPage);

        QMetaObject::connectSlotsByName(StuMainPage);
    } // setupUi

    void retranslateUi(QWidget *StuMainPage)
    {
        StuMainPage->setWindowTitle(QApplication::translate("StuMainPage", "Form", Q_NULLPTR));
        cb_audiodevice->clear();
        cb_audiodevice->insertItems(0, QStringList()
         << QApplication::translate("StuMainPage", "Default", Q_NULLPTR)
        );
        label->setText(QApplication::translate("StuMainPage", "Audio device", Q_NULLPTR));
        lbl_is_muted->setText(QApplication::translate("StuMainPage", "You are muted", Q_NULLPTR));
        lbl_vid->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StuMainPage: public Ui_StuMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUMAINPAGE_H
