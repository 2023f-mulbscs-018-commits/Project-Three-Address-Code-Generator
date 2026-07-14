#include "tac.h"

std::string TACGenerator::newTemp() {
    return "t" + std::to_string(tempCount++);
}
std::string TACGenerator::generate(ASTNode* node) {
    return "";
}
std::string TACGenerator::generate(ASTNode* node) {
    if (!node)
        return "";

    if (!node->left && !node->right)
        return node->value;

    return "";
}
std::string leftVal = generate(node->left);
std::string rightVal = generate(node->right);