//
// Created by ebon1 on 7/24/16.
//

#ifndef LAB2_NFA_H
#define LAB2_NFA_H

#include <string>
#include <vector>


struct vertex {
    int state;
    std::string description;
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

    void add_vertex(vertex);
    void add_vertex(int);
    vertex get_vertex(int);

    void add_edge(edge);
    void add_edge(int origin, int dest, std::string symbol);


    NFA() {

    };
};


#endif //LAB2_NFA_H
