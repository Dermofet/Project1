/********************************************************************************
** Form generated from reading UI file 'ListItem.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTITEM_H
#define UI_LISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ListItem_Form
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QToolButton *deleteBtn;
    QToolButton *renameBtn;

    void setupUi(QFrame *ListItem_Form)
    {
        if (ListItem_Form->objectName().isEmpty())
            ListItem_Form->setObjectName(QString::fromUtf8("ListItem_Form"));
        ListItem_Form->resize(229, 82);
        ListItem_Form->setFrameShape(QFrame::Box);
        ListItem_Form->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(ListItem_Form);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ListItem_Form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        deleteBtn = new QToolButton(ListItem_Form);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        horizontalLayout->addWidget(deleteBtn);

        renameBtn = new QToolButton(ListItem_Form);
        renameBtn->setObjectName(QString::fromUtf8("renameBtn"));

        horizontalLayout->addWidget(renameBtn);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ListItem_Form);

        QMetaObject::connectSlotsByName(ListItem_Form);
    } // setupUi

    void retranslateUi(QFrame *ListItem_Form)
    {
        ListItem_Form->setWindowTitle(QCoreApplication::translate("ListItem_Form", "Frame", nullptr));
        label->setText(QCoreApplication::translate("ListItem_Form", "TextLabel", nullptr));
        deleteBtn->setText(QCoreApplication::translate("ListItem_Form", "Delete", nullptr));
        renameBtn->setText(QCoreApplication::translate("ListItem_Form", "Rename", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListItem_Form: public Ui_ListItem_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTITEM_H
