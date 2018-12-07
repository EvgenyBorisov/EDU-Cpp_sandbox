#include <stdio.h>
#include <stdlib.h>
#define N 1000
typedef struct node_single node;
typedef struct queue queue;

struct  node_single {
	int data;
	node * next;
};

struct queue 
{
     node * head;
     node * tail;
};

void enqueue (struct queue *_q, int _x)
{
     struct node_single *_new = (struct node_single *) malloc(sizeof(struct node_single));
     _new->data = _x;
     _new->next = NULL;
     if (_q->tail == NULL) _q->head = _new;
        else _q->tail->next = _new;
     _q->tail = _new;
}

int dequeue (struct queue *_q)
{
     if (_q->head == NULL) return 0;
     int ret = _q->head->data;
     struct node_single *temp = _q->head;
     _q->head = _q->head->next;
     if (_q->head == NULL) _q->tail = NULL;
     free(temp);
     return ret;
}

int main()
{
     queue q1;
     q1.head = q1.tail =NULL;
     enqueue(&q1,10);
     enqueue(&q1,5);
     enqueue(&q1,7);
     printf("%d\n",dequeue(&q1));
     printf("%d\n",dequeue(&q1));
     printf("%d\n",dequeue(&q1));
     system("pause");
     return 0;
}
