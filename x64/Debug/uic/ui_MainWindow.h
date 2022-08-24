/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *mainHorLayout;
    QFrame *leftFrame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *leftVerLayout;
    QHBoxLayout *leftToolLayout;
    QLabel *mapToolLabel;
    QFrame *line_7;
    QToolButton *deleteMapBtn;
    QFrame *line_8;
    QToolButton *renameMapBtn;
    QFrame *line_9;
    QCommandLinkButton *addMapBtn;
    QSpacerItem *leftVerSpacer;
    QFrame *rightFrame;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *rightVerLayout;
    QHBoxLayout *rightToolLayout;
    QLabel *rightToolLabel;
    QFrame *line;
    QToolButton *deleteWordBtn;
    QFrame *line_2;
    QToolButton *renameWordBtn;
    QFrame *line_1;
    QCommandLinkButton *addWordBtn;
    QSpacerItem *rightVerSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(719, 614);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mainHorLayout = new QHBoxLayout();
        mainHorLayout->setObjectName(QString::fromUtf8("mainHorLayout"));
        leftFrame = new QFrame(centralwidget);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        leftFrame->setFrameShape(QFrame::Box);
        leftFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(leftFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftVerLayout = new QVBoxLayout();
        leftVerLayout->setObjectName(QString::fromUtf8("leftVerLayout"));
        leftToolLayout = new QHBoxLayout();
        leftToolLayout->setObjectName(QString::fromUtf8("leftToolLayout"));
        mapToolLabel = new QLabel(leftFrame);
        mapToolLabel->setObjectName(QString::fromUtf8("mapToolLabel"));

        leftToolLayout->addWidget(mapToolLabel);

        line_7 = new QFrame(leftFrame);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        leftToolLayout->addWidget(line_7);

        deleteMapBtn = new QToolButton(leftFrame);
        deleteMapBtn->setObjectName(QString::fromUtf8("deleteMapBtn"));
        deleteMapBtn->setPopupMode(QToolButton::DelayedPopup);

        leftToolLayout->addWidget(deleteMapBtn);

        line_8 = new QFrame(leftFrame);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        leftToolLayout->addWidget(line_8);

        renameMapBtn = new QToolButton(leftFrame);
        renameMapBtn->setObjectName(QString::fromUtf8("renameMapBtn"));

        leftToolLayout->addWidget(renameMapBtn);

        line_9 = new QFrame(leftFrame);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        leftToolLayout->addWidget(line_9);


        leftVerLayout->addLayout(leftToolLayout);

        addMapBtn = new QCommandLinkButton(leftFrame);
        addMapBtn->setObjectName(QString::fromUtf8("addMapBtn"));

        leftVerLayout->addWidget(addMapBtn);

        leftVerSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        leftVerLayout->addItem(leftVerSpacer);


        horizontalLayout->addLayout(leftVerLayout);


        mainHorLayout->addWidget(leftFrame);

        rightFrame = new QFrame(centralwidget);
        rightFrame->setObjectName(QString::fromUtf8("rightFrame"));
        rightFrame->setFrameShape(QFrame::Box);
        rightFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(rightFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rightVerLayout = new QVBoxLayout();
        rightVerLayout->setObjectName(QString::fromUtf8("rightVerLayout"));
        rightToolLayout = new QHBoxLayout();
        rightToolLayout->setObjectName(QString::fromUtf8("rightToolLayout"));
        rightToolLabel = new QLabel(rightFrame);
        rightToolLabel->setObjectName(QString::fromUtf8("rightToolLabel"));

        rightToolLayout->addWidget(rightToolLabel);

        line = new QFrame(rightFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        rightToolLayout->addWidget(line);

        deleteWordBtn = new QToolButton(rightFrame);
        deleteWordBtn->setObjectName(QString::fromUtf8("deleteWordBtn"));

        rightToolLayout->addWidget(deleteWordBtn);

        line_2 = new QFrame(rightFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        rightToolLayout->addWidget(line_2);

        renameWordBtn = new QToolButton(rightFrame);
        renameWordBtn->setObjectName(QString::fromUtf8("renameWordBtn"));

        rightToolLayout->addWidget(renameWordBtn);

        line_1 = new QFrame(rightFrame);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setFrameShape(QFrame::VLine);
        line_1->setFrameShadow(QFrame::Sunken);

        rightToolLayout->addWidget(line_1);


        rightVerLayout->addLayout(rightToolLayout);

        addWordBtn = new QCommandLinkButton(rightFrame);
        addWordBtn->setObjectName(QString::fromUtf8("addWordBtn"));

        rightVerLayout->addWidget(addWordBtn);

        rightVerSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        rightVerLayout->addItem(rightVerSpacer);


        horizontalLayout_3->addLayout(rightVerLayout);


        mainHorLayout->addWidget(rightFrame);


        horizontalLayout_2->addLayout(mainHorLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mapToolLabel->setText(QCoreApplication::translate("MainWindow", "Keyword maps", nullptr));
        deleteMapBtn->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        renameMapBtn->setText(QCoreApplication::translate("MainWindow", "rename", nullptr));
        addMapBtn->setText(QCoreApplication::translate("MainWindow", "Add new map", nullptr));
        rightToolLabel->setText(QCoreApplication::translate("MainWindow", "Keywords", nullptr));
        deleteWordBtn->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        renameWordBtn->setText(QCoreApplication::translate("MainWindow", "rename", nullptr));
        addWordBtn->setText(QCoreApplication::translate("MainWindow", "Add new word", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
