#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <Qobject>


class Calculator:public QObject
{

public:
    explicit Calculator(QObject *parent=nullptr);

    Q_INVOKABLE double calculate(double operand1, double operand2, const QString&operation);
};

#endif // CALCULATOR_H
