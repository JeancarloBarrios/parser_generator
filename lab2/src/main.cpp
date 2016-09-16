#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <map>
#include "../lib/NFA.h"
#include "../lib/utilities.h"

int main() {
//    std::cout << "Input a String " << std::endl;
//    std::cout << "The Thompson's Construction Algorithm takes a regular expression as an input " << std::endl;
//    std::cout << "and constructs its corresponding Non-Deterministic Finite Automaton" << std::endl;
//    // We Ask the user to input the regex string
//    std::cout << "Pleas input your regex" << std::endl;
//    std::string regexsInput;
//    std::cin>>regexsInput;
//
//    std::cout << "Your Input was: " << regexsInput << std::endl;
//    NFA nfa;
//    vertex s1, s2;
//    s1.state = 1;
//    s2.state = 2;
//    edge e1, e2, e3;
//    e1.orig = s1;
//    e1.dest = s1;
//    e1.symbol = "a";
//    e2.orig = s1;
//    e2.dest = s2;
//    e2.symbol = "b";
//    e3.symbol = "c";
//    e3.orig = s2;
//    e3.dest = s1;
//    nfa.add_vertex(s1);
//    nfa.add_vertex(s2);
//    nfa.add_edge(e1);
//    nfa.add_edge(e2);
//    nfa.add_edge(e3);
//    nfa.add_edge(2, 2, "e");
//    nfa.add_edge(2, 3, "p");
//    std::cout << nfa.get_edge_size() << std::endl;
//    std::cout << nfa.get_vertex_size() << std::endl;
//    std::vector<edge> test;
//    test = nfa.get_vertex_edges_dest(nfa.get_vertex(1));
//    if (nfa.vertex_exist(1)){
//        std::cout << "True" << std::endl;
//    }
//    for (int i=0; i<test.size(); i++){
//        std::cout << test[i].symbol << std::endl;
//    }
    utilities::infixToPostfix("a|b*");
    utilities::infixToPostfix("a|b+");

    return 0;
}
