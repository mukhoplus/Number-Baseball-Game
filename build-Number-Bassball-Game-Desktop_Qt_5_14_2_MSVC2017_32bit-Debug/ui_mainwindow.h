/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *replayButton;
    QTextBrowser *resultBrowser;
    QTextBrowser *number1;
    QTextBrowser *number2;
    QTextBrowser *number3;
    QTextBrowser *number4;
    QPushButton *button3;
    QPushButton *button2;
    QPushButton *button1;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button4;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *button7;
    QPushButton *button0;
    QPushButton *playButton;
    QPushButton *resetButton;
    QTableWidget *resultWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        replayButton = new QPushButton(centralwidget);
        replayButton->setObjectName(QString::fromUtf8("replayButton"));
        replayButton->setGeometry(QRect(400, 520, 371, 51));
        resultBrowser = new QTextBrowser(centralwidget);
        resultBrowser->setObjectName(QString::fromUtf8("resultBrowser"));
        resultBrowser->setGeometry(QRect(400, 10, 371, 81));
        number1 = new QTextBrowser(centralwidget);
        number1->setObjectName(QString::fromUtf8("number1"));
        number1->setGeometry(QRect(20, 10, 81, 81));
        number1->setMouseTracking(false);
        number2 = new QTextBrowser(centralwidget);
        number2->setObjectName(QString::fromUtf8("number2"));
        number2->setGeometry(QRect(110, 10, 81, 81));
        number2->setMouseTracking(false);
        number3 = new QTextBrowser(centralwidget);
        number3->setObjectName(QString::fromUtf8("number3"));
        number3->setGeometry(QRect(200, 10, 81, 81));
        number3->setMouseTracking(false);
        number4 = new QTextBrowser(centralwidget);
        number4->setObjectName(QString::fromUtf8("number4"));
        number4->setGeometry(QRect(290, 10, 81, 81));
        number4->setMouseTracking(false);
        button3 = new QPushButton(centralwidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setGeometry(QRect(260, 110, 111, 111));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setGeometry(QRect(140, 110, 111, 111));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setGeometry(QRect(20, 110, 111, 111));
        button5 = new QPushButton(centralwidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setGeometry(QRect(140, 230, 111, 111));
        button6 = new QPushButton(centralwidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setGeometry(QRect(260, 230, 111, 111));
        button4 = new QPushButton(centralwidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setGeometry(QRect(20, 230, 111, 111));
        button8 = new QPushButton(centralwidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setGeometry(QRect(140, 350, 111, 111));
        button9 = new QPushButton(centralwidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setGeometry(QRect(260, 350, 111, 111));
        button7 = new QPushButton(centralwidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setGeometry(QRect(20, 350, 111, 111));
        button0 = new QPushButton(centralwidget);
        button0->setObjectName(QString::fromUtf8("button0"));
        button0->setGeometry(QRect(140, 470, 111, 111));
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setEnabled(false);
        playButton->setGeometry(QRect(260, 470, 111, 111));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(20, 470, 111, 111));
        resultWidget = new QTableWidget(centralwidget);
        if (resultWidget->columnCount() < 3)
            resultWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        resultWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        resultWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        resultWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        resultWidget->setObjectName(QString::fromUtf8("resultWidget"));
        resultWidget->setGeometry(QRect(400, 110, 371, 391));
        resultWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        resultWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        resultWidget->setTabKeyNavigation(true);
        resultWidget->setProperty("showDropIndicator", QVariant(false));
        resultWidget->setDragDropOverwriteMode(false);
        resultWidget->setSelectionMode(QAbstractItemView::NoSelection);
        resultWidget->setShowGrid(true);
        resultWidget->setSortingEnabled(false);
        resultWidget->horizontalHeader()->setVisible(true);
        resultWidget->horizontalHeader()->setCascadingSectionResizes(false);
        resultWidget->horizontalHeader()->setHighlightSections(true);
        resultWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        resultWidget->horizontalHeader()->setStretchLastSection(true);
        resultWidget->verticalHeader()->setVisible(false);
        resultWidget->verticalHeader()->setCascadingSectionResizes(false);
        resultWidget->verticalHeader()->setHighlightSections(true);
        resultWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        resultWidget->verticalHeader()->setStretchLastSection(false);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        replayButton->setText(QCoreApplication::translate("MainWindow", "\353\213\244\354\213\234\355\225\230\352\270\260", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", "\354\247\204\355\226\211\355\225\230\352\270\260", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "\354\264\210\352\270\260\355\231\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem = resultWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\353\235\274\354\232\264\353\223\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = resultWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\354\210\253\354\236\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = resultWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\352\262\260\352\263\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
