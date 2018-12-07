#include <stdio.h>
#include <stdlib.h>
#define N 1000

struct queue 
{
     int mas[N];
     int head;
     int tail;
};

void enqueue (struct queue *_q, int _x)
{
     if (_q->head - _q->tail == 1 || _q->head - _q->tail == N-1) return;
     _q->mas[_q->tail] = _x;
     if (_q->tail == N-1) _q->tail = 0;
        else _q->tail++;
}

int dequeue (struct queue *_q)
{
     if (_q->head == _q->tail) return 0;
     return _q->mas[_q->head++];
}

int main()
{
     struct queue s1;
     s1.head = s1.tail = 0;
     enqueue(&s1,10);
     enqueue(&s1,5);
     enqueue(&s1,7);
     printf("%d\n",dequeue(&s1));
     printf("%d\n",dequeue(&s1));
     printf("%d\n",dequeue(&s1));
     system("pause");
     return 0;
}
