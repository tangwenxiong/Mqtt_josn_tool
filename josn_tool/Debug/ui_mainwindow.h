/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_Item;
    QPushButton *remove_Item;
    QPushButton *pushButton;
    QCheckBox *mode_select;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *generate_josn;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QTextBrowser *display_josn;
    QCheckBox *add_Escape_char;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(561, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setEditTriggers(QAbstractItemView::DoubleClicked);

        verticalLayout_2->addWidget(treeWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        add_Item = new QPushButton(centralWidget);
        add_Item->setObjectName(QStringLiteral("add_Item"));

        horizontalLayout_2->addWidget(add_Item);

        remove_Item = new QPushButton(centralWidget);
        remove_Item->setObjectName(QStringLiteral("remove_Item"));

        horizontalLayout_2->addWidget(remove_Item);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        mode_select = new QCheckBox(centralWidget);
        mode_select->setObjectName(QStringLiteral("mode_select"));

        horizontalLayout_2->addWidget(mode_select);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        generate_josn = new QPushButton(centralWidget);
        generate_josn->setObjectName(QStringLiteral("generate_josn"));

        horizontalLayout_2->addWidget(generate_josn);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        display_josn = new QTextBrowser(centralWidget);
        display_josn->setObjectName(QStringLiteral("display_josn"));
        display_josn->setEnabled(true);

        verticalLayout->addWidget(display_josn);

        add_Escape_char = new QCheckBox(centralWidget);
        add_Escape_char->setObjectName(QStringLiteral("add_Escape_char"));

        verticalLayout->addWidget(add_Escape_char);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        add_Item->raise();
        add_Escape_char->raise();
        mode_select->raise();
        display_josn->raise();
        remove_Item->raise();
        generate_josn->raise();
        treeWidget->raise();
        display_josn->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 561, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\351\224\256\345\200\274", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\351\224\256\345\220\215", 0));
        add_Item->setText(QApplication::translate("MainWindow", "+", 0));
        remove_Item->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\345\255\220\351\241\271\347\233\256+", 0));
        mode_select->setText(QApplication::translate("MainWindow", "\346\225\260\345\200\274", 0));
        generate_josn->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220", 0));
        add_Escape_char->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\275\254\344\271\211\345\255\227\347\254\246", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
