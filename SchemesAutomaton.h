//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_SCHEMESAUTOMATON_H
#define LAB1_SCHEMESAUTOMATON_H
#import "Automaton.h"
class SchemesAutomaton : public Automaton
{
    ///////FINNISH
private:
    void s0()
    {
        if (match(','))
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
    SchemesAutomaton()
    {
        type = TokenType::SCHEMES; // set the type
    }
};
#endif // LAB1_SCHEMESAUTOMATON_H
