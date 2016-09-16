//
// Created by ebon1 on 8/28/16.
//

#ifndef LAB2_STACK_H
#define LAB2_STACK_H

#include <string>
struct Node{
    std::string data;
    Node *next;
};


class Stack {
public:
    Stack();
    ~Stack();
    void push(std::string s);
    std::string pop();

private:
    Node *top;
};


#endif //LAB2_STACK_H
