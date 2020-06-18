//
// Created by pumpk on 08.05.2020.
//

#ifndef PROJECT_STRUCTURE_H
#define PROJECT_STRUCTURE_H

typedef struct node{        ///<Node structure
    char data[64];          ///<Character array where the word is stored
    struct node * right;    ///<Pointer to the right child in the tree
    struct node * left;     ///<Pointer to the left child in the tree
} node_t;

#endif //PROJECT_STRUCTURE_H
