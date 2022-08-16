#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Calculator.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_plus_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input("+");
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_subtract_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input("-");
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_multiply_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input("*");
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_divide_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input("/");
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_dot_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(".");
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_allClear_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.allClear();
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_evalAnswer_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.evaluate();
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num0_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(0);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num1_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(1);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num2_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(2);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num3_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(3);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num4_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(4);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num5_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(5);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num6_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(6);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num7_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(7);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num8_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(8);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_num9_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input(9);
    ui->lcdNumber->setText(calc.text());
}

void MainWindow::on_remainder_clicked() {
    auto &calc = *Calculator::getInstance();
    calc.input("%");
    ui->lcdNumber->setText(calc.text());
}