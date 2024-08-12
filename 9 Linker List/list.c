#include <stdio.h>
#include "list.h"
//Them 1 node
Node_t * createNode(int data)
{
    Node_t *temp = (Node_t*) malloc(1*sizeof(Node_t));
    temp->data = data;
    temp->next = NULL;
    return temp;    //Tra ve dia chi cua node
}

// Them 1 node moi vao dau danh sach B->A
void pushHead(Node_t **head, int data)
{
    Node_t *_temp = createNode(data);
    if(*head == NULL)
    {
        //printf("chua co node\n");
        *head = _temp;
    }
    else{
            //printf("Da co node");
        _temp->next = *head; //tro den thang A
        *head = _temp;
    }
}
//pos dem tu 0
bool pushAt(Node_t *head, int data, int pos)
{
    int i=0;
    Node_t *pt = head;
    while (pt !=NULL && i!=pos-1)
    {
        pt = pt->next;
        i++;
    }
    if(i!=pos-1)
    {
        return false;
    }
    else{
        Node_t *temp = createNode(data);
        temp->next  = pt->next;
        pt->next = temp; //tro den thang A

    }
    return true;
}

void pushTail(Node_t *head, int data)
{
    Node_t *pt = head;
    while(pt->next!= NULL)
    {
        pt = pt->next;
    }
    Node_t *temp = createNode(data);
    pt->next = temp;
}
