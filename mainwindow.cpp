#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <map>
#include <ctime>
#include <iostream>
using namespace std;

int answer[5] = {-1, -1, -1, -1, -1};
int userInput[5] = {-1, -1, -1, -1, -1};
static int result[3] = {0, 0, 0};
int gameRound = 1;
int buttonCnt = 0;

void setAnswer() {
    for(int i = 1; i < 5; ++i) {
        int number = rand() % 10;
        for(int j = 1; j < i; ++j) {
            if(answer[j] == number) {
                number = rand() % 10;
                j = 0;
                continue;
            }
        }
        answer[i] = number;
    }
}

void enableHandler(Ui::MainWindow* ui) {
    ui->button0->setEnabled(true);
    ui->button1->setEnabled(true);
    ui->button2->setEnabled(true);
    ui->button3->setEnabled(true);
    ui->button4->setEnabled(true);
    ui->button5->setEnabled(true);
    ui->button6->setEnabled(true);
    ui->button7->setEnabled(true);
    ui->button8->setEnabled(true);
    ui->button9->setEnabled(true);
    ui->playButton->setEnabled(false);
    fill_n(userInput, 5, -1);
}

void unenabledHandler(Ui::MainWindow* ui) {
    ui->button0->setEnabled(false);
    ui->button1->setEnabled(false);
    ui->button2->setEnabled(false);
    ui->button3->setEnabled(false);
    ui->button4->setEnabled(false);
    ui->button5->setEnabled(false);
    ui->button6->setEnabled(false);
    ui->button7->setEnabled(false);
    ui->button8->setEnabled(false);
    ui->button9->setEnabled(false);
    ui->playButton->setEnabled(true);
}

void textHandler(Ui::MainWindow* ui, int num) {
    switch(buttonCnt) {
    case 1:
        ui->number1->setText(QString::number(num));
        break;
    case 2:
        ui->number2->setText(QString::number(num));
        break;
    case 3:
        ui->number3->setText(QString::number(num));
        break;
    case 4:
        ui->number4->setText(QString::number(num));
        break;
    }
}

void numberInputCheck(Ui::MainWindow* ui) {
    if(buttonCnt != 4) return;
    unenabledHandler(ui);
}

void button0Handler(Ui::MainWindow* ui) {
    ui->button0->setEnabled(false);
    userInput[++buttonCnt] = 0;
    textHandler(ui, 0);
    numberInputCheck(ui);
}

void button1Handler(Ui::MainWindow* ui) {
    ui->button1->setEnabled(false);
    userInput[++buttonCnt] = 1;
    textHandler(ui, 1);
    numberInputCheck(ui);
}

void button2Handler(Ui::MainWindow* ui) {
    ui->button2->setEnabled(false);
    userInput[++buttonCnt] = 2;
    textHandler(ui, 2);
    numberInputCheck(ui);
}

void button3Handler(Ui::MainWindow* ui) {
    ui->button3->setEnabled(false);
    userInput[++buttonCnt] = 3;
    textHandler(ui, 3);
    numberInputCheck(ui);
}

void button4Handler(Ui::MainWindow* ui) {
    ui->button4->setEnabled(false);
    userInput[++buttonCnt] = 4;
    textHandler(ui, 4);
    numberInputCheck(ui);
}

void button5Handler(Ui::MainWindow* ui) {
    ui->button5->setEnabled(false);
    userInput[++buttonCnt] = 5;
    textHandler(ui, 5);
    numberInputCheck(ui);
}

void button6Handler(Ui::MainWindow* ui) {
    ui->button6->setEnabled(false);
    userInput[++buttonCnt] = 6;
    textHandler(ui, 6);
    numberInputCheck(ui);
}

void button7Handler(Ui::MainWindow* ui) {
    ui->button7->setEnabled(false);
    userInput[++buttonCnt] = 7;
    textHandler(ui, 7);
    numberInputCheck(ui);
}

void button8Handler(Ui::MainWindow* ui) {
    ui->button8->setEnabled(false);
    userInput[++buttonCnt] = 8;
    textHandler(ui, 8);
    numberInputCheck(ui);
}

void button9Handler(Ui::MainWindow* ui) {
    ui->button9->setEnabled(false);
    userInput[++buttonCnt] = 9;
    textHandler(ui, 9);
    numberInputCheck(ui);
}

void resetTextHandler(Ui::MainWindow* ui) {
    ui->number1->setText("");
    ui->number2->setText("");
    ui->number3->setText("");
    ui->number4->setText("");
}

void init(Ui::MainWindow* ui) {
    fill_n(userInput, 5, -1);
    buttonCnt = 0;
    enableHandler(ui);
}

void resetButtonHandler(Ui::MainWindow* ui) {
    init(ui);
    enableHandler(ui);
    resetTextHandler(ui);
}

void is4Strike() {
    fill_n(result, 3, 0);

    for(int i = 1; i < 5; ++i) {
        bool isOut = true;

        for(int j = 1; j < 5; ++j) {
            if(userInput[i] == answer[j]) {
                if(i == j) ++result[0];
                else ++result[1];
                isOut = false;
                break;
            }
        }

        if(isOut) ++result[2];
    }
}

void playButtonHandler(Ui::MainWindow* ui) {
    is4Strike();

    if(result[0] == 4) {
        unenabledHandler(ui);
        ui->resetButton->setEnabled(false);
        ui->playButton->setEnabled(false);
        ui->resultBrowser->setText("Successful in " + QString::number(gameRound) + " round.");
    }
    else {
        QString resultData = QString::number(result[0]) + "S " + QString::number(result[1]) + "B " + QString::number(result[2]) + "O";

        ui->resultBrowser->setText(resultData);

        QStringList data;
        data << QString::number(gameRound) << QString::number(userInput[1]) + QString::number(userInput[2]) + QString::number(userInput[3]) + QString::number(userInput[4]) << resultData;

        int rowCount = ui->resultWidget->rowCount();
        int columnCount = 3;
        ui->resultWidget->setRowCount(rowCount + 1);

        for (int column = 0; column < columnCount; ++column) {
            QTableWidgetItem* item = new QTableWidgetItem(data[column]);
            item->setTextAlignment(Qt::AlignCenter);
            ui->resultWidget->setItem(rowCount, column, item);
        }

        resetButtonHandler(ui);
        resetTextHandler(ui);
        ++gameRound;
    }
}

void replayButtonHandler(Ui::MainWindow* ui) {
    resetButtonHandler(ui);
    resetTextHandler(ui);

    ui->resultBrowser->setText("Made By Mukho\nCopyright 2023 Mukho I/O.\nAll rights reserved.");

    ui->resultWidget->clearContents();
    ui->resultWidget->setRowCount(0);

    gameRound = 1;
    setAnswer();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString newTitle = "Number Baseball Game";
    setWindowTitle(newTitle);
    setAnswer();
    init(ui);

    ui->number1->setAlignment(Qt::AlignCenter);
    ui->number1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number1->setFontPointSize(30);
    ui->number2->setAlignment(Qt::AlignCenter);
    ui->number2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number2->setFontPointSize(30);
    ui->number3->setAlignment(Qt::AlignCenter);
    ui->number3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number3->setFontPointSize(30);
    ui->number4->setAlignment(Qt::AlignCenter);
    ui->number4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->number4->setFontPointSize(30);
    ui->resultBrowser->setFontPointSize(15);
    ui->resultBrowser->setText("Made By Mukho\nCopyright 2023 Mukho I/O.\nAll rights reserved.");

    // Button Connection
    connect(ui->button0, &QPushButton::clicked, this, [this]() { button0Handler(ui); });
    connect(ui->button1, &QPushButton::clicked, this, [this]() { button1Handler(ui); });
    connect(ui->button2, &QPushButton::clicked, this, [this]() { button2Handler(ui); });
    connect(ui->button3, &QPushButton::clicked, this, [this]() { button3Handler(ui); });
    connect(ui->button4, &QPushButton::clicked, this, [this]() { button4Handler(ui); });
    connect(ui->button5, &QPushButton::clicked, this, [this]() { button5Handler(ui); });
    connect(ui->button6, &QPushButton::clicked, this, [this]() { button6Handler(ui); });
    connect(ui->button7, &QPushButton::clicked, this, [this]() { button7Handler(ui); });
    connect(ui->button8, &QPushButton::clicked, this, [this]() { button8Handler(ui); });
    connect(ui->button9, &QPushButton::clicked, this, [this]() { button9Handler(ui); });

    connect(ui->resetButton, &QPushButton::clicked, this, [this]() { resetButtonHandler(ui); });
    connect(ui->playButton, &QPushButton::clicked, this, [this]() { playButtonHandler(ui); });
    connect(ui->replayButton, &QPushButton::clicked, this, [this]() { replayButtonHandler(ui); });

}

MainWindow::~MainWindow()
{
    delete ui;
}

