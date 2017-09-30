
#ifndef CALC_SQRT_H
#define CALC_SQRT_H

#include "CalculatorOperation.h"

class Sqrt : public CalculatorOperation {
public:
    int requiredParameters(){return 0;}
    double calcResult(double currVal, vector<string> parameters) { return sqrt(currVal); }
};

#endif //CALC_SQRT_H
