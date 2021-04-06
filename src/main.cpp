#include "Graph.hpp"

void recursion(int depth, Graph &graph) {
    if (depth > 30000)
        return;

    Graph graph_cpy = graph;  // dummy copy
    Graph graph_cpy2 = graph; // second dummy copy
    printf("Depth = %d \n", depth + 1);
    recursion(depth + 1, graph);
}

int main() {

    Graph graph;

    //graph.readEdges("input/p_hat1000_2");
    graph.readEdges("input/prob_4/400/00400_1");
    recursion(0, graph);
    return 0;

}