#include "parser.h"

ASTNode* Parser::parse(std::vector<Token> t) {
    tokens = t;
    pos = 0;
    return nullptr;
}
