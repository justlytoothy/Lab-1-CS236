//
// Created by Jake Schilling on 6/21/22.
//

#ifndef LAB1_IDAUTOMATON_H
#define LAB1_IDAUTOMATON_H
#include "Automaton.h"
// need these for isalnum and isalpha
#include <stdio.h>
#include <ctype.h>
class IDAutomaton : public Automaton {
private:

    void s0() {
        if (isalpha(curr())) {
            checkMe+=curr();
            next();
            s1();
        }
        else
            sError();
    }
    void s1() {
        if (checkMe == "Facts" || checkMe == "Queries" || checkMe == "Rules") {
            checkMe = "";
            sError();
        }
        if (isalnum(curr())) {
            checkMe+=curr();
            next();
            s1();
        }
        else {
            checkMe = "";
            return; //accept
        }
    }
public:
    IDAutomaton() {
        type = TokenType::ID; // set the type
    }
    string checkMe = "";
};
#endif //LAB1_IDAUTOMATON_H
