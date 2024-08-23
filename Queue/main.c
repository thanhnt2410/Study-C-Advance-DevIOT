#include<stdio.h>
#include"queue.h"

int main()
{
    int item;
    queue_t *queue = create_queue(5);
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);
    dequeue(queue, &item);
    printf("Get item:%5d\n", item);
    enqueue(queue, 6);

    printf("Front:%5d\n", getFront(queue));
    printf("Rear:%5d\n", getRear(queue));
    for(int i=0; i<10; i++)
    {
        enqueue(queue, 5+i);
        dequeue(queue, &item);
        printf("Get item: %d\n", item);
    }
}
