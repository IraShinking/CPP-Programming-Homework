//Calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <sstream>
#include <cmath>
#include <cassert>
using namespace std;
#include "Stack.h"//C++项目如果模板的地方函数和定义分离会容易报错

class Calculator
{
private:
    Stack<double> s;
    void enter(double num);
    bool getTwoOperands(double &opnd1, double &opnd2);
    void compute(char op);

public:
    void run();
    void clear();
};

void Calculator::enter(double num)
{
    s.push(num);
}
bool Calculator::getTwoOperands(double &opnd1, double &opnd2)
{
    if (s.isEmpty())
    {
        cerr << "Missing operand!" << endl;
        return false;
    }
    opnd1 = s.pop();
    if (s.isEmpty())
    {
        cerr << "Missing operand!" << endl;
        return false;
    }
    opnd2 = s.pop();
    return true;
}

void Calculator::compute(char op)
{
    double operand1, operand2;
    bool result = getTwoOperands(operand1, operand2);
    if (result)
    {
        switch (op)
        {
        case '+':
            s.push(operand2 + operand1);
            break;
        case '-':
            s.push(operand2 - operand1);
            break;
        case '*':
            s.push(operand2 * operand1);
            break;
        case '/':
        {
            if (operand1 == 0)
            {
                cerr << "Divided by 0!" << endl;
                s.clear();
            }
            else
            {
                s.push(operand2 / operand1);
            }
        }
        break;
        case '^':
            s.push(pow(operand2, operand1));
            break;
        default:
            cerr << "Unrecognized operator!" << endl;
        }
        cout << "=" << s.peek() << " ";
    }
    else
        s.clear();
}

inline double stringToDouble(const string &str)
{
    istringstream stream(str);
    double result;
    stream >> result;
    return result;
}

void Calculator::run()
{
    cout<<"Input operands(press q to end):";
    string str;

    while (cin >> str, str != "q")
    {
        switch (str[0])
        {
        case 'c':
            s.clear();
            break;
        case '-':
        {
            if (str.size() > 1)
                enter(stringToDouble(str));
            else
            {
                compute(str[0]);
            }
        }
        break;
        case '+':
        case '*':
        case '/':
        case '^':
        {
            compute(str[0]);
        }
        break;
        default:
            enter(stringToDouble(str));
            break;
        }
    }
}

void Calculator::clear()
{
    s.clear();
}

#endif//Calculator.h