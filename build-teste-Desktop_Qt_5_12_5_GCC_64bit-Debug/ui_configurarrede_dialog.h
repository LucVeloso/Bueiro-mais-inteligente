/********************************************************************************
** Form generated from reading UI file 'configurarrede_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURARREDE_DIALOG_H
#define UI_CONFIGURARREDE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ConfigurarRede_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_Porta;
    QComboBox *comboBox_BaudRate;

    void setupUi(QDialog *ConfigurarRede_Dialog)
    {
        if (ConfigurarRede_Dialog->objectName().isEmpty())
            ConfigurarRede_Dialog->setObjectName(QString::fromUtf8("ConfigurarRede_Dialog"));
        ConfigurarRede_Dialog->resize(261, 100);
        label = new QLabel(ConfigurarRede_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 58, 21));
        label_2 = new QLabel(ConfigurarRede_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 71, 21));
        comboBox_Porta = new QComboBox(ConfigurarRede_Dialog);
        comboBox_Porta->setObjectName(QString::fromUtf8("comboBox_Porta"));
        comboBox_Porta->setGeometry(QRect(70, 20, 171, 24));
        comboBox_BaudRate = new QComboBox(ConfigurarRede_Dialog);
        comboBox_BaudRate->setObjectName(QString::fromUtf8("comboBox_BaudRate"));
        comboBox_BaudRate->setGeometry(QRect(90, 60, 151, 24));

        retranslateUi(ConfigurarRede_Dialog);

        QMetaObject::connectSlotsByName(ConfigurarRede_Dialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigurarRede_Dialog)
    {
        ConfigurarRede_Dialog->setWindowTitle(QApplication::translate("ConfigurarRede_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("ConfigurarRede_Dialog", "Porta:", nullptr));
        label_2->setText(QApplication::translate("ConfigurarRede_Dialog", "BaudRate:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurarRede_Dialog: public Ui_ConfigurarRede_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURARREDE_DIALOG_H
