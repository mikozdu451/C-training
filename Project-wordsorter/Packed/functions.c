//
// Created by pumpk on 08.05.2020.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "structure.h"

char * compare_char(char * m, char * n)
{
    if(strcmp(m,n) < 0)
        return m;
    else if (strcmp(m,n) > 0)
        return n;
    else
        return "";
}

void add_tree(node_t * head, char * word)
{
    node_t *current = head;
    if(strcmp(current->data, "") == 0)
    {
        strcpy(current->data,word);
    }
    else
    {
        //printf("Adding new data   ");
        if(compare_char(current->data, word) == word)
        {
            //printf("Left    ");
            if(current->left == NULL)
            {
                current->left = (node_t *) malloc(sizeof(node_t));
                strcpy(current->left->data, word);
                current->left->left = NULL;
                current->left->right = NULL;

            }
            else
                add_tree(current->left, word);
        }
        else if (compare_char(current->data, word) == current->data)
        {
            //printf("Right   ");
            if(current->right == NULL)
            {
                current->right = (node_t *) malloc(sizeof(node_t));
                strcpy(current->right->data, word);
                current->right->left = NULL;
                current->right->right = NULL;

            }
            else
                add_tree(current->right, word);
        } //else printf("%s and %s are the same\n", word, current->data);
    }

}

void remove_punct(char *p)
{
    char *src = p, *dst = p;

    while (*src)
    {
        if (ispunct((unsigned char)*src) || (unsigned char)*src > 127)
        {
            // Skip this character
            src++;
        }
            //in case of getting rid of upper characters too
        else if (isupper((unsigned char)*src))
        {
            //* Make it lowercase *//*
            *dst++ = tolower((unsigned char)*src);
            src++;
        }
        else if (src == dst)
        {
            //Increment both pointers without copying
            src++;
            dst++;
        }
        else
        {
            // Copy character
            *dst++ = *src++;
        }
    }
    *dst = 0;
}

void readfile(char *name,node_t * head)
{
    FILE *f;
    f = fopen(name,"r");
    char line[64];
    if(f)
    {
        while(fscanf(f, "%s", line) != EOF)
        {
            remove_punct(line);
            add_tree(head, line);
            //printf("%s\n", line);
        }
    }
    else {
        printf("%s", "Something is wrong");
    }
    fclose(f);

}

void print_tree_to_file(FILE *name, node_t * head)
{

    if(head) {
        node_t *current = head;
        if(head->left != NULL)
            print_tree_to_file(name, current->left);
        fprintf(name, "%s\n", current->data);
        if(head->right != NULL)
            print_tree_to_file(name, current->right);

    }
    else
        printf("List is empty");
}

void print_tree(node_t * head)
{
    if(head) {
        node_t *current = head;
        if(head->left != NULL)
            print_tree(current->left);
        printf("%s\n", current->data);
        if(head->right != NULL)
            print_tree(current->right);

    }
    else
        printf("List is empty");
}

void writefile(char *name, node_t * head)
{
    FILE *fp;
    fp = fopen(name, "w");
    if(fp) {
        print_tree_to_file(fp, head);
        fclose(fp);
    } else printf("Unable to create output file");
    fclose(fp);
}

void delete_tree(node_t * head)
{
    if(head != NULL) {
        if (head->left != NULL)
            delete_tree(head->left);
        if (head->right != NULL)
            delete_tree(head->right);
        free(head);
    }
}

