/* queue.h -- Queue 的接口 */
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

//在这里插入Item类型的定义，例如
typedef int Item;     //用于use_q.c
//或者 typedef struct item {int gumption; int charisma;}Item;

#define MAXQUEUE 10    //队列项数

typedef struct node
{
	Item item;				//数据
	struct node *next;      		//下一个节点
}Node;

typedef struct queue
{
	Node * front;				//头节点
	Node * rear;				//尾节点
	int items;				//节点计数
}Queue;

/*
操作： 		初始化队列
前提条件：  pq指向一个队列
后置条件：	队列被初始化为空
*/
void InitializeQueue(Queue *pq);

/*
操作： 		检查队列是否满
前提条件：  pq指向之前被初始化的队列
后置条件：	如果队列已满返回：true ， 否则返回false
*/
bool QueueIsFull(const Queue *pq);

/*
操作： 		检查队列是否为空
前提条件：  pq指向之前被初始化的队列
后置条件：	如果队列为空返回：true ， 否则返回false
*/
bool QueueIsEmpty(const Queue *pq);

/*
操作： 		确定队列的项数
前提条件：  pq指向之前被初始化的队列
后置条件：	返回队列中的项数
*/
int QueueItemCount(const Queue *pq);

/*
操作： 		在队列末尾添加项
前提条件：  pq指向之前被初始化的队列
			item是要被添加在队尾的项
后置条件：	如果队列不为空，item 将被添加在队列的末尾
			返回：true ， 否则队列不改变 ， 返回false
*/
bool EnQueue(Item item, Queue *pq);

/*
操作： 		从队列开头删除项
前提条件：  pq指向之前被初始化的队列
后置条件：	如果队列不为空,队列首端的item将被拷贝到*pitem中
			并被删除，且该函数返回：true
			如果该操作使队列为空，则重置队列为空
			如果队列在操作前为空，该函数返回：false
*/
bool DeQueue(Item *pitem, Queue *pq);

/*
操作： 		清空队列
前提条件：  pq指向之前被初始化的队列
后置条件：	队列被清空
*/
void EmptyTheQueue(Queue *pq);

/*
操作： 		打印队列内容
前提条件：  pq指向之前被初始化的队列
后置条件：	显示队列里面的内容
*/
void printQueue(Queue *pq);

/* 局部函数 */
static void CopyToNode(Item item, Node * pn);
static void CopyToItem(Node * pn, Item * pi);

#endif
