//
// Created by ebon1 on 8/31/16.
//

#ifndef LAB2_NFASTRUCTS_H
#define LAB2_NFASTRUCTS_H

#include <string>

struct Symbol{
    char value;
    std::string definition;
};

struct vertex {
    int state;
};

struct edge{
    vertex orig;
    vertex dest;
    Symbol symbol;
};

struct State{
    int c;

};

struct frag{

};
#endif //LAB2_NFASTRUCTS_H
