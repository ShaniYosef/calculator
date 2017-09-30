//
// Created by user-pc on 23/09/2017.
//

#ifndef CALC_CALCULATOR_H
#define CALC_CALCULATOR_H

#include <iostream>
#include <vector>
#include <map>
#include "CalculatorOperation.h"
#include "Add.h"
#include "Sub.h"
#include "Sqrt.h"
#include "Set.h"
#include "Div.h"
#include "Pow.h"
#include "Multi.h"

using namespace std;
class Calculator {
public:
    Calculator();
    ~Calculator();
    CalculatorOperation* getOperation();
    void initiParm(int parameters_number);
    void printCurrVal();
    void start();

private:
    double m_currVal;
    vector<string> m_parameters;
    std::map<string,CalculatorOperation*> m_operations;

};


#endif //CALC_CALCULATOR_H
