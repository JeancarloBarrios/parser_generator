//
// Created by ebon1 on 7/24/16.
//

#include "NFA.h"

void NFA::add_vertex(vertex node) {
    this->vertexV.push_back(node);
}

void NFA::add_vertex(int state) {
    bool state_exist = false;
    for (int i=0; i<get_vertex_size(); i++){
        if (vertexV[i].state== state){
            state_exist = true;
            break;
        }
    }
    if (state_exist == false){
        vertex node;
        node.state = state;
        this->vertexV.push_back(node);
    }
}

vertex NFA::get_vertex(int state) {
    for (int i=0; i<get_vertex_size(); i++){
        if (vertexV[i].state == state){
            return vertexV[i];
        }
    }
}

void NFA::add_edge(edge e) {
    this->edgeV.push_back(e);
}

void NFA::add_edge(int origin, int destination, std::string symbol) {
    vertex orig, dest;
    orig = get_vertex(origin);
    dest = get_vertex(destination);
    edge e;
    e.orig = orig;
    e.dest = dest;
    e.symbol = symbol;
    this->edgeV.push_back(e);

}