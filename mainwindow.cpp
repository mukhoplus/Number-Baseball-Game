#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <map>
using namespace std;

map<int, int> numbers; // number, index
int buttonCnt = 0;

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

void numberInputCheck(Ui::MainWindow* ui) {
    if(buttonCnt != 4) return;
    unenabledHandler(ui);
}

void button0Handler(Ui::MainWindow* ui) {
    ui->button0->setEnabled(false);
    numbers[0] = ++buttonCnt;
    numberInputCheck(ui);
}

void button1Handler(Ui::MainWindow* ui) {
    ui->button1->setEnabled(false);
    numbers[1] = ++buttonCnt;
    numberInputCheck(ui);
}

void button2Handler(Ui::MainWindow* ui) {
    ui->button2->setEnabled(false);
    numbers[2] = ++buttonCnt;
    numberInputCheck(ui);
}

void button3Handler(Ui::MainWindow* ui) {
    ui->button3->setEnabled(false);
    numbers[3] = ++buttonCnt;
    numberInputCheck(ui);
}

void button4Handler(Ui::MainWindow* ui) {
    ui->button4->setEnabled(false);
    numbers[4] = ++buttonCnt;
    numberInputCheck(ui);
}

void button5Handler(Ui::MainWindow* ui) {
    ui->button5->setEnabled(false);
    numbers[5] = ++buttonCnt;
    numberInputCheck(ui);
}

void button6Handler(Ui::MainWindow* ui) {
    ui->button6->setEnabled(false);
    numbers[6] = ++buttonCnt;
    numberInputCheck(ui);
}

void button7Handler(Ui::MainWindow* ui) {
    ui->button7->setEnabled(false);
    numbers[7] = ++buttonCnt;
    numberInputCheck(ui);
}

void button8Handler(Ui::MainWindow* ui) {
    ui->button8->setEnabled(false);
    numbers[8] = ++buttonCnt;
    numberInputCheck(ui);
}

void button9Handler(Ui::MainWindow* ui) {
    ui->button9->setEnabled(false);
    numbers[9] = ++buttonCnt;
    numberInputCheck(ui);
}

void init(Ui::MainWindow* ui) {
    numbers[0] = 0;
    numbers[1] = 0;
    numbers[2] = 0;
    numbers[3] = 0;
    numbers[4] = 0;
    numbers[5] = 0;
    numbers[6] = 0;
    numbers[7] = 0;
    numbers[8] = 0;
    numbers[9] = 0;
    buttonCnt = 0;
    enableHandler(ui);
}

void resetButtonHandler(Ui::MainWindow* ui) {
    init(ui);
    enableHandler(ui);
}

void playButtonHandler(Ui::MainWindow* ui) {
    // 처리 로직
    resetButtonHandler(ui);
}

void replayButtonHandler(Ui::MainWindow* ui) {
    // 기록 처리 로직
    resetButtonHandler(ui);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init(ui);

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


    // Record Connection




}

MainWindow::~MainWindow()
{
    delete ui;
}

