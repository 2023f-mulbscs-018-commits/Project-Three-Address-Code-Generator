#include "tac.h"

std::string TACGenerator::newTemp() {
    return "t" + std::to_string(tempCount++);
}