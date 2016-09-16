//
// Created by ebon1 on 8/30/16.
//

#ifndef LAB2_THOMPSON_H
#define LAB2_THOMPSON_H


struct State {
    int c;
    int lastList;
    State *out;
    State *out1;
};

struct Frag
{
    State *start;
    Ptrlist *out;
};

class Thompson {

};


#endif //LAB2_THOMPSON_H
