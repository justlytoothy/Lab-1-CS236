//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_COMMENTAUTOMATON_H
#define LAB1_COMMENTAUTOMATON_H
#include "Automaton.h"
class CommentAutomaton : public Automaton
{
    //Make terminate if reaches end of file with no closing tag
private:
    void s0()
    {
        if (match('#'))
        {
            next();
            if (match('|')) {
                next();
                s1();
            }
        }
        else
        {
            sError();
        } // this calls the error state
    }
    void s1()
    {
        if (!match('|'))
        {
            next();
            s1(); // this represents accepting the input
        }
        else
        {
            next();
            if (match('#')) {
                next();
                return;
            }
            else {
                next();
                s1();
            }
        } // this calls the error state
    }

public:
    CommentAutomaton()
    {
        type = TokenType::COMMENT; // set the type
    }
};
#endif // LAB1_COMMENTAUTOMATON_H
