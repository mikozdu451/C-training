//
// Created by pumpk on 08.05.2020.
//

#ifndef PROJECT_FUNCTIONS_H
#define PROJECT_FUNCTIONS_H

#include <stdio.h>
#include "structure.h"

char * compare_char(char * m, char * n);

void add_tree(node_t * head, char * word);

void remove_punct(char *p);

void readfile(char *name,node_t * head);

void print_tree_to_file(FILE *name, node_t * head);

void print_tree(node_t * head);

void writefile(char *name, node_t * head);

void delete_tree(node_t * head);

#endif //PROJECT_FUNCTIONS_H
