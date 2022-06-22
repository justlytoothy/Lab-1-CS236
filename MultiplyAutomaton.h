//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_MULTIPLYAUTOMATON_H
#define LAB1_MULTIPLYAUTOMATON_H
#include "Automaton.h"
class MultiplyAutomaton : public Automaton
{
private:
    void s0()
    {
        if (match('*'))
        {
            next();
            return; // this represents accepting the input
        }
        else
        {
            sError();
        } // this calls the error state
    }

public:
    MultiplyAutomaton()
    {
        type = TokenType::MULTIPLY; // set the type
    }
};
#endif // LAB1_MULTIPLYAUTOMATON_H
