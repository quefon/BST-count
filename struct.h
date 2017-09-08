#ifndef STRUCT_H_INCLUDE
#define STRUCT_h_INCLUDE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000
struct BST{
    char temp[MAX];
    char value[MAX];
    int count;
    int exist;
    struct BST *right;
    struct BST *left;
}p[MAX];
typedef struct BST Node;
typedef Node *treeNode;

#endif
