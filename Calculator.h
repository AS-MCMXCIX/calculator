//
// Created by AS on 8/15/22.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H


#include <QObject>
#include <QJSEngine>
#include <iostream>

using namespace std;

class Calculator : public QObject {
Q_OBJECT
private:
    Calculator() = default;

    static Calculator *instance;
public:
    static Calculator *getInstance() {
        if (!instance)
            instance = new Calculator;
        return instance;
    }

public:
    void input(const string& s);

    void input(int s);

    QString text();

    void allClear();

    double evaluate();

private:
    QString currArg = "";
};


#endif //CALCULATOR_CALCULATOR_H
