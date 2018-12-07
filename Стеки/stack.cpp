#include <stdio.h>
#include <stdlib.h>
#define N 1000

struct stack 
{
     int mas[N];
     int top;
};

void push (struct stack *_s, int _x)
{
     if (_s->top >= N-1) return;
     _s->top++;
     _s->mas[_s->top] = _x;
}

int pop (struct stack *_s)
{
     if (_s->top < 0) return 0;
     return _s->mas[_s->top--];
}

int main()
{
     struct stack s1;
     s1.top = -1;
     push(&s1,10);
     push(&s1,5);
     push(&s1,7);
     printf("%d\n",pop(&s1));
     printf("%d\n",pop(&s1));
     printf("%d\n",pop(&s1));
     system("pause");
     return 0;
}
