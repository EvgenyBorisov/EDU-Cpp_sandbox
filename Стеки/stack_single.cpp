#include <stdio.h>
#include <stdlib.h>
#define N 1000

struct  node_single {
	int data;
	struct node_single * next;
};

struct stack 
{
     struct node_single * top;
};

void push (struct stack *_s, int _x)
{
     struct node_single *_new = (struct node_single *) malloc(sizeof(struct node_single));
     _new->data = _x;
     _new->next = _s->top;
     _s->top = _new;
}

int pop (struct stack *_s)
{
     if (_s->top == NULL) return 0;
     int ret = _s->top->data;
     struct node_single *temp = _s->top;
     _s->top = _s->top->next;
     free(temp);
     return ret;
}

int main()
{
     struct stack s1;
     s1.top=NULL;
     push(&s1,10);
     push(&s1,5);
     push(&s1,7);
     printf("%d\n",pop(&s1));
     printf("%d\n",pop(&s1));
     printf("%d\n",pop(&s1));
     system("pause");
     return 0;
}
