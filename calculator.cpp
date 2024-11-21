#include "calculator.h"

Calculator::Calculator(QObject *parent):QObject(parent) {}

double Calculator::calculate(double operand1, double operand2, const QString &operation)
{
    if(operation=="+")
    {
        return operand1+operand2;
    }
    else if(operation=="-")
    {
        return operand1-operand2;
    }
    else if(operation=="*")
    {
        return operand1*operand2;
    }
    else if(operation=="/")
    {
        return operand2 !=0?operand1/operand2:0;
    }
    else
    {
        return 0;
    }
}
