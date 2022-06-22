//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_STRINGAUTOMATON_H
#define LAB1_STRINGAUTOMATON_H
#import "Automaton.h"
class StringAutomaton : public Automaton
{
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
    StringAutomaton()
    {
        type = TokenType::STRING; // set the type
    }
};
#endif // LAB1_STRINGAUTOMATON_H
