//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_RULESAUTOMATON_H
#define LAB1_RULESAUTOMATON_H
#import "Automaton.h"
class RulesAutomaton : public Automaton
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
    RulesAutomaton()
    {
        type = TokenType::RULES; // set the type
    }
};
#endif // LAB1_RULESAUTOMATON_H
