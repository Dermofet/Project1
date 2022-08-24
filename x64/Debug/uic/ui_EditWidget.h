/********************************************************************************
** Form generated from reading UI file 'EditWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGET_H
#define UI_EDITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWidget_Form
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *upHorLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *downHorLayout;
    QPushButton *btnAccept;
    QPushButton *btnCancel;

    void setupUi(QWidget *EditWidget_Form)
    {
        if (EditWidget_Form->objectName().isEmpty())
            EditWidget_Form->setObjectName(QString::fromUtf8("EditWidget_Form"));
        EditWidget_Form->resize(342, 138);
        EditWidget_Form->setMinimumSize(QSize(200, 50));
        horizontalLayout = new QHBoxLayout(EditWidget_Form);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        upHorLayout = new QHBoxLayout();
        upHorLayout->setObjectName(QString::fromUtf8("upHorLayout"));
        label = new QLabel(EditWidget_Form);
        label->setObjectName(QString::fromUtf8("label"));

        upHorLayout->addWidget(label);

        lineEdit = new QLineEdit(EditWidget_Form);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        upHorLayout->addWidget(lineEdit);


        verticalLayout->addLayout(upHorLayout);

        downHorLayout = new QHBoxLayout();
        downHorLayout->setObjectName(QString::fromUtf8("downHorLayout"));
        btnAccept = new QPushButton(EditWidget_Form);
        btnAccept->setObjectName(QString::fromUtf8("btnAccept"));

        downHorLayout->addWidget(btnAccept);

        btnCancel = new QPushButton(EditWidget_Form);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        downHorLayout->addWidget(btnCancel);


        verticalLayout->addLayout(downHorLayout);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(EditWidget_Form);

        QMetaObject::connectSlotsByName(EditWidget_Form);
    } // setupUi

    void retranslateUi(QWidget *EditWidget_Form)
    {
        EditWidget_Form->setWindowTitle(QCoreApplication::translate("EditWidget_Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("EditWidget_Form", "TextLabel", nullptr));
        btnAccept->setText(QCoreApplication::translate("EditWidget_Form", "Accept", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditWidget_Form", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditWidget_Form: public Ui_EditWidget_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGET_H
