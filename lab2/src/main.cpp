#include <iostream>
#include <string>
#include "../lib/NFA.h"

int main() {
    std::cout << "Input a String " << std::endl;
    std::cout << "The Thompson's Construction Algorithm takes a regular expression as an input " << std::endl;
    std::cout << "and constructs its corresponding Non-Deterministic Finite Automaton" << std::endl;
    // We Ask the user to input the regex string
    std::cout << "Pleas input your regex" << std::endl;
    std::string regexsInput;
    std::cin>>regexsInput;

    std::cout << "Your Input was: " << regexsInput << std::endl;
    NFA nfa;
    vertex s1, s2;
    s1.state = 1;
    s2.state = 2;
    edge e1, e2, e3;
    e1.orig = s1;
    e1.dest = s1;
    e1.symbol = "a";
    e2.orig = s1;
    e2.dest = s2;
    e2.symbol = "b";
    e3.symbol = "c";
    e3.orig = s2;
    e3.dest = s1;
    nfa.add_vertex(s1);
    nfa.add_vertex(s2);
    nfa.add_edge(e1);
    nfa.add_edge(e2);
    nfa.add_edge(e3);
    nfa.add_edge(2, 2, "e");
    std::cout << nfa.get_edge_size() << std::endl;
    std::cout << nfa.get_vertex_size() << std::endl;

    return 0;
}
