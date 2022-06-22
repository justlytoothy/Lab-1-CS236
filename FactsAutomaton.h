//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_FACTSAUTOMATON_H
#define LAB1_FACTSAUTOMATON_H
#include "Automaton.h"
class FactsAutomaton : public Automaton
{
    ///////FINISH
private:
    void s0()
    {
        if (match('F'))
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
        if (match('a'))
        {
            next();
            s2(); // this represents accepting the input
        }
        else
        {
            sError();
        } // this calls the error state
    }
    void s2()
    {
        if (match('c'))
        {
            next();
            s3(); // this represents accepting the input
        }
        else
        {
            sError();
        } // this calls the error state
    }
    void s3()
    {
        if (match('t'))
        {
            next();
            s4(); // this represents accepting the input
        }
        else
        {
            sError();
        } // this calls the error state
    }
    void s4()
    {
        if (match('s'))
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
    FactsAutomaton()
    {
        type = TokenType::FACTS; // set the type
    }
};
#endif // LAB1_FACTSAUTOMATON_H
