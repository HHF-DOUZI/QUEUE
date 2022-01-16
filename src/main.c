#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(void)
{
    Queue line;
    Item temp;
    Node *new;
    char ch;
    int a = 1;

    new = (Node *)malloc(sizeof(Node));
    InitializeQueue(&line);
    EnQueue(a, &line);
    EnQueue(2, &line);
    EnQueue(3, &line);
    EnQueue(4, &line);
    EnQueue(5, &line);
    EnQueue(6, &line);
    EnQueue(7, &line);
    EnQueue(8, &line);
    EnQueue(9, &line);
    EnQueue(10, &line);
    DeQueue(&a, &line);
    // EnQueue(1, &line);
    // EnQueue(1, &line);
    // EnQueue(1, &line);
    if (QueueIsFull(&line) == false)
    {
        printf("no full\n");
    }
    else
        printf("count %d \n", 1);

    
    printQueue(&line);
    printf("%d\n", new->item);

    return 0;
    
}