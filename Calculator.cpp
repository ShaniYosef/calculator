//
// Created by user-pc on 23/09/2017.
//

#include "Calculator.h"

Calculator::Calculator()
{
    m_currVal = 0;
    m_operations["set"] = new Set;
    m_operations["+"] = new Add;
    m_operations["add"] = m_operations["+"];
    m_operations["-"] = new Sub;
    m_operations["sub"] = m_operations["-"];
    m_operations["*"] = new Multi;
    m_operations["multiply"] = m_operations["*"];
    m_operations["/"] = new Div;
    m_operations["divide"] = m_operations["/"];
    m_operations["^"] = new Pow;
    m_operations["pow"] = m_operations["^"];
    m_operations["sqrt"] = new Sqrt;
    m_operations["OFF"] = NULL;

}

void Calculator::printCurrVal()
{
    cout << ">> Current value is: " << m_currVal << endl;
}

Calculator::~Calculator()
{
    for (std::map<string,CalculatorOperation*>::iterator it=m_operations.begin(); it!=m_operations.end(); ++it)
        delete it->second;
}


//returns the CalculatorOperation that match the input
CalculatorOperation* Calculator::getOperation()
{
    string op;
    cin >> op;
    return m_operations[op];
}


void Calculator::initiParm(int parameters_number)
{
    string param;
    for(int i=0;i<parameters_number;i++)
    {
        cin >> param;
        m_parameters.push_back(param);
    }
    cin.clear();
    cin.ignore(INT_MAX,'\n');
}

void Calculator::start()
{
    CalculatorOperation * op;
    cout << ">> ";
    while((op=getOperation())!=NULL) // read the wanted operation
    {
        initiParm(op->requiredParameters()); // initiate the parameters
        m_currVal = op->calcResult(m_currVal,m_parameters); //do the operation
        m_parameters.clear();
        printCurrVal();
        cout << ">> ";
    }
    cout << "INVALID BYE BYE :-(" << endl;
}