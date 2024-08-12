#ifndef __LIST_H
#define __LIST_H
#include<stdbool.h>
typedef struct{
    int data;
    struct Node_t *next;
} Node_t;
Node_t * createNode(int data);
void pushHead(Node_t **head, int val);
bool pushAt(Node_t *head, int data, int pos);
void pushTail(Node_t *head, int data);
#endif // __LIST_H
