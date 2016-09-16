//
// Created by ebon1 on 8/28/16.
//
#include <iostream>
#include <string>

#include "utilities.h"


bool isCharOrDigit(char a) {
    a = int(a);
    if (((a>=65)&&(a<=90))||((a>=97)&&(a<=122))||((a>=48)&&(a<=57)))
        return true;
    else return false;
}

bool isOperator(char a) {
    switch (a) {
        case '+': return true;
        case '*': return true;
        case '(': return true;
        case ')': return true;
        case '|': return true;
        case '&': return true;
        default: return false;
    }
}

int order(char op) {
    switch (op){
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
        case '^': return 3;

        default: return 0;
    }
}

bool isHigher(char a, char b) {
    if(order(a)>=order(b)) return true;
    else return false;
}

std::string pop(std::string s) {
    return s.substr(0,s.size()-1);
}

tokenOperatorsStacks utilities::infixToPostfix(std::string infix) {
    tokenOperatorsStacks stacks;
    for (int i=0; i<infix.length(); i++){
        std::cout << infix.at(i) << std::endl;
    }
}