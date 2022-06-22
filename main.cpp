#include "Lexer.h"
#include <fstream>
int main() {
    ifstream myFile;
    myFile.open("example.txt");
    cout << myFile.gcount() << endl;
    if (!myFile.fail()) {
        Lexer lexer;
        lexer.run("#|#yuhg$|hello there     |##|#| big comment right here ''''::::-|#tFactstgRulestgQuerieshoSchemes");
    }
    return 0;
}