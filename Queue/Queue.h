#include<stdint.h>
#include<stdbool.h>
typedef struct{
    int front;          //chỉ số của phần tử đầu queue
    int rear;           //chỉ số của phần tử cuối queue
    int used;           //số phần tử đang có trong queue
    int capacity;       //dung lượng max của queue
    int *array;         //con trỏ trỏ đến mảng tượng chưng
} queue_t;

queue_t* create_queue(int capacity);
//static bool isEmpty(queue_t *queue);
//static bool is Full(queue_t *queue);
int getFront(queue_t *queue);
int getRear(queue_t *queue);
int enqueue(queue_t *queue, int item);
int dequeue(queue_t *queue, int *item);
