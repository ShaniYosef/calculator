//
// Created by user-pc on 23/09/2017.
//

#ifndef CALC_POW_H
#define CALC_POW_H

#include "CalculatorOperation.h"

class Pow : public CalculatorOperation
{
public:
    int requiredParameters(){return 1;};
    double calcResult(double currVal, vector<string> parameters){return pow(currVal,atof(&(parameters[0][0])));};
};


#endif //CALC_POW_H
