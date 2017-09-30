//
// Created by user-pc on 23/09/2017.
//

#ifndef CALC_CALCULATOROPERATION_H
#define CALC_CALCULATOROPERATION_H

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class CalculatorOperation {
public:
    virtual int requiredParameters()=0;
    virtual double calcResult(double currVal, vector<string> parameters) = 0;

};


#endif //CALC_CALCULATOROPERATION_H
