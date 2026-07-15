#ifndef PARSER_H
#define PARSER_H

#include "lexer.h"
#include <string>
#include <vector>

// A node in the syntax tree
struct ASTNode {
    std::string value;
    ASTNode* left;
    ASTNode* right;
    
    ASTNode(std::string val) : value(val), left(nullptr), right(nullptr) {}
};

class Parser {
private:
    std::vector<Token> tokens;
    int pos = 0;
public:
    ASTNode* parse(std::vector<Token> t);
};

#endif
