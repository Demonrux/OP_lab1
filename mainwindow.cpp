#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->convertedButton, &QPushButton::clicked, this, &MainWindow::onConvertClicked);
    connect(ui->initializeButton, &QPushButton::clicked, this, &MainWindow::onDeliteClicked);
    connect(ui->copyButton, &QPushButton::clicked, this, &MainWindow::onCopyButtonClicked);
    connect(ui->swapButton, &QPushButton::clicked, this, &MainWindow::onSwapClicked);
    ui->valueEdit->setMaxLength(LEN - 1);
    updateLabels();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onDeliteClicked() {
    doOperation(Initialization, &context);
    updateLabels();
}

void MainWindow::onSwapClicked() {
    strcpy_s(context.inputStr, (ui->valueEdit->text()).toStdString().c_str());
    int temp = ui->currentBaseBox->currentIndex();
    ui->currentBaseBox->setCurrentIndex(ui->toBaseBox->currentIndex());
    ui->toBaseBox->setCurrentIndex(temp);
    doOperation(Swap, &context);
    updateLabels();
}

void MainWindow::onConvertClicked() {
    doOperation(Initialization, &context);
    strcpy_s(context.inputStr, (ui->valueEdit->text()).toStdString().c_str());
    context.currentBase = ui->currentBaseBox->currentText().toInt();
    context.toBase = ui->toBaseBox->currentText().toInt();
    doOperation(ChekingAddCode, &context);
    doOperation(Validation, &context);
    if(context.inputStatus) {
        if(context.addStatus)
            doOperation(ConvertAddCode, &context);
        else
            doOperation(Convert, &context);
    }
    else if(!context.inputStatus) {
        QMessageBox::critical(this,"ProgramError", "Некорректный ввод");
    }
    updateLabels();
}
void MainWindow::onCopyButtonClicked() {
    if(strlen(context.result)) {
        doOperation(Save, &context);
        updateLabels();
    }
}

void MainWindow::updateLabels() {
    ui->valueEdit->setText(context.inputStr);
    ui->outpuLabel->setText(context.result);
}


