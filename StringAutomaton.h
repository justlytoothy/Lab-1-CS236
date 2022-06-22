//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_STRINGAUTOMATON_H
#define LAB1_STRINGAUTOMATON_H
#include "Automaton.h"
class StringAutomaton : public Automaton
{
private:
    void s0()
    {
        if (match('\''))
        {
            next();
            s1();
        }
        else
        {
            sError();
        } // this calls the error state
    }
    void s1()
    {
        if (match('\'') && matchNext(('\''))) {
            next();
            next();
            s1();
        }
        if (!match('\''))
        {
            next();
            s1(); // this represents accepting the input
        }
        else
        {
            next();
            return;
        } // this calls the error state
    }

public:
    StringAutomaton()
    {
        type = TokenType::STRING; // set the type
    }
};
#endif // LAB1_STRINGAUTOMATON_H
