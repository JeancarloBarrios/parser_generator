//
// Created by ebon1 on 8/28/16.
//

#ifndef LAB2_UTILITIES_H
#define LAB2_UTILITIES_H

#include <stack>
#include <map>
#include <string>
#include <stack>
struct tokenOperatorsStacks{
    std::stack<char> tokens;
    std::stack<char> operators;
};

class utilities {

public:
    static tokenOperatorsStacks infixToPostfix(std::string s);

};


#endif //LAB2_UTILITIES_H
