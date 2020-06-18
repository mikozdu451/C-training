//
// Created by pumpk on 08.05.2020.
//

#ifndef PROJECT_FUNCTIONS_H
#define PROJECT_FUNCTIONS_H

#include <stdio.h>
#include "structure.h"
/**Function compares two words and returns that which comes alphabetically first
 *
 * @param m char pointer to the first word
 * @param n char pointer to the second word
 * @return return alphabetically first word. In case if m and n are the same return a pointer to an empty sting
 */
char * compare_char(char * m, char * n);
/**Functions takes a pointer to a word and adds it to the tree
 *
 * @param head pointer to the head of the tree
 * @param word word to be added to the sting
 */
void add_tree(node_t * head, char * word);
/**Function takes a word and removes all punctuation and non ASCII characters from it
 *
 * @param p word from which punctuation is to be removed
 */
void remove_punct(char *p);
/** Functions opens file and reads it. If the file wasn't found it will return false. If the file was found it will return true
 *
 * @param name pointer to the name of the file which is to be read
 * @param head pointer to the head of the tree
 * @return if the file is found the function returns true, else it returns false
 */
bool readfile(char *name, node_t * head);
/** Function takes the tree and prints it to the output file
 *
 * @param name pointer to the name of the file to which the tree containing sorted words is to be writen
 * @param head pointer to the head of the tree
 */
void print_tree_to_file(FILE *name, node_t * head);
// /** Function takes the tree and prints it
// *
// * @param head pointer to the head of the tree
// */
//void print_tree(node_t * head);
/** Function takes the name of the output file which is to be created and creates it
 *
 * @param name name of the file which will be crated
 * @param head pointer to the head of the tree
 */
void writefile(char *name, node_t * head);
/** Function deletes the tree
 *
 * @param head pointer to the head of the tree
 */
void delete_tree(node_t * head);

#endif //PROJECT_FUNCTIONS_H
