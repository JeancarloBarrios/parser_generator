//
// Created by ebon1 on 7/24/16.
//

#include "NFA.h"

// Iterates in the vector of vertex to find if a given
// vertex exist
//
// @param state the to be found vertex state
// @return boolean value (found or not found)

bool NFA::vertex_exist(int state) {
    for (int i=0; i<get_vertex_size(); i++){
        if (vertexV[i].state== state){
            return true;
        }
    }
    return false;
}

//TODO Add error handling for if vertex exist
// Adds a new vertex to the NFA
//  It also checks if the vertex exist
// @param vertex struct to be added
// @return void

void NFA::add_vertex(vertex node) {
    bool state_exist = vertex_exist(node.state);
    if (state_exist == false){
        this->vertexV.push_back(node);
    }
}

//TODO Add error handling for if vertex exist
// Adds a new vertex to the NFA by giving it a new int state
//  It also checks if the vertex exist
// @param int struct to be added
// @return void

void NFA::add_vertex(int state) {
    bool state_exist = vertex_exist(state);

    if (state_exist == false){
        vertex node;
        node.state = state;
        this->vertexV.push_back(node);
    }
}

//TODO Add error handling for if vertex does not exist
// Returns a vertex find
//
// @param state int of vertex
// @return vertex that was found
vertex NFA::get_vertex(int state) {
    for (int i=0; i<get_vertex_size(); i++){
        if (vertexV[i].state == state){
            return vertexV[i];
        }
    }
}

// Simple way to add an edge giving it
// a edge struct
//
// @param edge the edge to be added
// @return void

void NFA::add_edge(edge e) {
    this->edgeV.push_back(e);
}

// Adds an edge to the NFA, with and edge description
// it also will create vertex if the vertex does not exist either orig or dest
//
// @param int origin(origin state) int destination(destination state string symbol(edge symbol)
// @return void

void NFA::add_edge(int origin, int destination, std::string symbol) {
    vertex orig, dest;
    if (vertex_exist(origin)){
        orig = get_vertex(origin);
    }
    else {
        orig.state = origin;
    }
    if (vertex_exist(destination)) {
        dest = get_vertex(destination);
    }
    else{
        dest.state = destination;
    }

    edge e;
    e.orig = orig;
    e.dest = dest;
    e.symbol = symbol;
    this->edgeV.push_back(e);

}
// TODO A struct comaparison method needs to be created or change to classes
std::vector<edge> NFA::get_vertex_edges_orig(vertex node) {
    std::vector<edge> ev;
    for (int i=0; i<get_edge_size(); i++){
        if(node.state == edgeV[i].orig.state){
            ev.push_back(edgeV[i]);
        }
    }
    return ev;
}

std::vector<edge> NFA::get_vertex_edges_dest(vertex node) {
    std::vector<edge> ev;
    for (int i=0; i<get_edge_size(); i++){
        if(node.state == edgeV[i].dest.state){
            ev.push_back(edgeV[i]);
        }
    }
    return ev;
}