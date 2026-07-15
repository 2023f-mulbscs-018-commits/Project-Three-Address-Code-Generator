#include "parser.h"

ASTNode* Parser::parse(std::vector<Token> t) {
    tokens = t;
    pos = 0;
    
    if (tokens.size() < 3) return nullptr; // Basic safety check
    
    // Hardcoded simple parser for assignment: ID = Expr
    ASTNode* root = new ASTNode(tokens[1].value); // The "=" sign
    root->left = new ASTNode(tokens[0].value);    // The target variable
    
    // For simplicity in this base project, we assume right side is "a + b"
    ASTNode* expr = new ASTNode(tokens[3].value); // The operator (+, *)
    expr->left = new ASTNode(tokens[2].value);
    expr->right = new ASTNode(tokens[4].value);
    
    root->right = expr;
    return root;
}
