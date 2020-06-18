//
// Created by pumpk on 08.05.2020.
//

#ifndef PROJECT_STRUCTURE_H
#define PROJECT_STRUCTURE_H

typedef struct node{
    char data[32];
    struct node * right;
    struct node * left;
} node_t;

#endif //PROJECT_STRUCTURE_H
