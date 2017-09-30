#ifndef CALC_SUB_H
#define CALC_SUB_H

#include "CalculatorOperation.h"
class Sub: public CalculatorOperation {
public:
    int requiredParameters(){return 1;};
    double calcResult(double currVal, vector<string> parameters){return currVal-atof(&((parameters[0])[0]));};
};


#endif //CALC_SUB_H
