#include<iostream>
#include<string>
#include "lexer.h"
#include "parser.h"
#include "tac.h"
using namespace std;

int main() {
    cout << "--- Starting TAC Compiler Pipeline ---\n" << endl;

    string sourceCode = "x = a + b"; // The code to compile
    cout << "Input Source: " << sourceCode << "\n" << endl;

    cout << "\n--- Compilation Complete ---" << endl;
    // Step 1: Lexical Analysis
    Lexer lexer;
    vector tokens = lexer.tokenize(sourceCode);
    return 0;

}