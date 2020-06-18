#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"
#include "structure.h"

int main(int argc, char *argv[]) {
    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    head->right = NULL;
    head->left = NULL;
    strcpy(head->data, "");
    char * input = "NONE";
    char * output = "NONE";
    bool run = false;
    if (argc == 5) {
        if (strcmp(argv[1], "-i") == 0 && strcmp(argv[3], "-o") == 0) {
            input = argv[2];
            output = argv[4];
            run = true;

        } else if (strcmp(argv[1], "-o") == 0 && strcmp(argv[3], "-i") == 0) {
            input = argv[4];
            output = argv[2];
            run = true;
        } else {
            printf("Wrong arguments!\n");
        }
    }

    if(run) {
        if(readfile(input, head)) {
            writefile(output, head);
            printf("Sorting finished successfully\n");
        }
    }
    else if (argc > 1 || (argc == 2 && strcmp(argv[1], "-h") == 0)){
        printf("Program sorts words from a text in an ascending order and saves them to an output file\nCommand line switches:\n-i name of the input file\n-o name of the output file\n-h show help page\n");
    }

    delete_tree(head);
    printf("Process finished");
    //print_tree(head);


    return 0;
    
}
