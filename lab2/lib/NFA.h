//
// Created by ebon1 on 7/24/16.
//

#ifndef LAB2_NFA_H
#define LAB2_NFA_H

#include <string>
#include <vector>

// TODO A struct comaparison method needs to be created or change to classes
struct vertex {
    int state;
};

struct edge{
    vertex orig;
    vertex dest;
    std::string symbol;
};

class NFA {
    std::vector<vertex> vertexV;
    std::vector<edge> edgeV;

public:
    int get_vertex_size(){
      return vertexV.size();
    }

    int get_edge_size(){
        return edgeV.size();
    }
    bool vertex_exist(int);
    void add_vertex(vertex);
    void add_vertex(int);
    vertex get_vertex(int);

    void add_edge(edge);
    void add_edge(int origin, int dest, std::string symbol);
    std::vector<edge> get_vertex_edges_orig(vertex);
    std::vector<edge> get_vertex_edges_dest(vertex);


    NFA() {

    };
};


#endif //LAB2_NFA_H
