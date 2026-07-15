#include "parser.h"

ASTNode* Parser::parse(std::vector<Token> t) {
    tokens = t;
    pos = 0;
    
    if (tokens.size() < 3) return nullptr; // Basic safety check
    
    return nullptr;
}
