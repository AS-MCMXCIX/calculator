//
// Created by AS on 8/15/22.
//

#include "Calculator.h"

Calculator *Calculator::instance = nullptr;

void Calculator::input(const string &s) {
    Calculator::currArg += QString::fromStdString(s);
}

void Calculator::input(int s) {
    Calculator::currArg.append(QString::number(s));
}

QString Calculator::text() {
    return Calculator::currArg;
}

void Calculator::allClear() {
    Calculator::currArg = "";
}

double Calculator::evaluate() {
    QJSEngine expression;
    double ans = expression.evaluate(Calculator::currArg).toNumber();
    cout << ans << endl;
    Calculator::currArg = QString::number(ans);
    return ans;
}
