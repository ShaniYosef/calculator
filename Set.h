//
// Created by user-pc on 23/09/2017.
//

#ifndef CALC_SET_H
#define CALC_SET_H

#include "CalculatorOperation.h"

class Set: public CalculatorOperation {
public:
    int requiredParameters(){return 1;}
    double calcResult(double currVal, vector<string> parameters){return atof(&(parameters[0][0]));}
};
#endif //CALC_SET_H
