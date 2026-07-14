#ifndef TAC_H
#define TAC_H

#include "parser.h"
#include <iostream>
#include <string>

class TACGenerator {
private:
    
    int tempCount = 1;
    std::string newTemp();

public:
    std::string generate(ASTNode* node);
};

#endif