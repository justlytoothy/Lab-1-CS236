#include "Lexer.h"
#include <fstream>
int main() {
    ifstream myFile;
    myFile.open("../in10.txt");
    if (myFile.is_open()) {
        Lexer lexer;
        string line = "";
        unsigned int lineNum = 0;
        while(getline(myFile, line)) {
            lexer.run(line, lineNum);
            lineNum++;
        }

        return 0;
    }
    else {
        return 1;
    }
}