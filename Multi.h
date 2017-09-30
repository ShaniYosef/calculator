//
// Created by user-pc on 23/09/2017.
//

#ifndef CALC_MULTI_H
#define CALC_MULTI_H

#include "CalculatorOperation.h"
class Multi: public CalculatorOperation {
public:
    virtual int requiredParameters(){return 1;}
    virtual double calcResult(double currVal, vector<string> parameters){return currVal*atof(&(parameters[0][0]));}
};


#endif //CALC_MULTI_H
