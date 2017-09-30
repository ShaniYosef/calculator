//
// Created by user-pc on 23/09/2017.
//

#ifndef CALC_ADD_H
#define CALC_ADD_H

#include "CalculatorOperation.h"
class Add: public CalculatorOperation{
public:
    int requiredParameters(){return 1;}
    double calcResult(double currVal, vector<string> parameters){return currVal+atof(&(parameters[0][0]));}
};


#endif //CALC_ADD_H
