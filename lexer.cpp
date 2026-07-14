#include "lexer.h"
#include <cctype>

// Commit 5: Empty function
std::vector<Token> Lexer::tokenize(std::string input) {
    std::vector<Token> tokens;
    for (size_t i = 0; i < input.length(); i++) {
         if (isspace(input[i])) continue; // Skip spaces

          if (isalpha(input[i])) { // It's an identifier/variable
            std::string id = "";
            while (i < input.length() && isalpha(input[i])) {
                id += input[i++];
            }
            tokens.push_back({"ID", id});
            i--; 
        }
    }
    return tokens;
}