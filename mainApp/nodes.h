#ifndef NODES_H
#define NODES_H
#include <QVector>

struct Node
{
    bool is_obstacle = false;
    bool is_visited = false;
    float fGlobalGoal;
    float fLocalGoal;
    int x;
    int y;
    QVector<Node*> nodes_neighbour;
    Node* node_parent;
};


#endif // NODES_H
