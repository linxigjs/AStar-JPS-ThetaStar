#ifndef NODE_H
#define NODE_H

struct Node
{
    int i, j;
    double F, g, H;
    Node *parent;
};
#endif
