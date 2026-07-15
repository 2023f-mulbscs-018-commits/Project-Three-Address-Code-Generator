//final code 
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
    // Step 2: Syntax Analysis
    Parser parser;
    ASTNode* syntaxTree = parser.parse(tokens);
    // Step 3: TAC Generation
    if (syntaxTree != nullptr) {
        TACGenerator generator;
        cout << "Generated TAC:" << endl;
        generator.generate(syntaxTree);
    } else {
        cout << "Error: Syntax Tree generation failed." << endl;
    }

    return 0;

}