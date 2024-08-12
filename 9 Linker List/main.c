/*  Danh sach lien ket là một tập hợp các node được phân bố động, được sắp xếp theo cách mà mỗi node sẽ chứa 1 giá trị
    và một con trỏ trỏ đến node tiếp theo nó. Nếu con trỏ là NULL, thì nó là nút cuối cùng trong danh sách.
    Một danh sách được liên kết được giữ bằng cách sử dụng một biến con trỏ cục bộ trỏ đến mục đầu tiên của danh sách.
    Nếu con trỏ đó cũng là NULL thì danh sách được coi là trống.
*/

#include <stdio.h>
#include<stdint.h>
#include "list.h"
void printAllNode(Node_t *head)
{
    Node_t *pt = head;
    while(pt != NULL)
    {
        printf("Data: %d\n", pt->data);
        pt = pt->next;
    }
}


int main()
{
//    Node_t *head = (Node_t *)malloc(1 * sizeof(Node_t));
//    Node_t *second = (Node_t *)malloc(1 * sizeof(Node_t));
//    Node_t *third = (Node_t *)malloc(1 * sizeof(Node_t));
//    head->data =1;
//    head->next = second;
//    second ->data =2;
//    second->next = third;
//    third->data =3;
//    third->next = NULL;
    Node_t *head = NULL;
    head = createNode(1); //1
    pushHead(&head, 2); //0
    pushAt(head, 3, 2);//3
    pushAt(head, 4, 2);//2
    pushTail(head, 5);
    pushTail(head, 6);
    printAllNode(head);
}

