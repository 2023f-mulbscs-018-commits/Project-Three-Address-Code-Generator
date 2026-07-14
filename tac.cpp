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
if (node->value == "=") {
    std::cout << leftVal << " = " << rightVal << std::endl;
    return leftVal;
}
std::string temp = newTemp();
std::cout << temp << " = " << leftVal << " "
          << node->value << " "
          << rightVal << std::endl;

return temp;