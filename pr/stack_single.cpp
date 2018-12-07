#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#define N 1000

using namespace std;

struct  node_single {
	int data;
	struct node_single * next;
};

struct stack 
{
     struct node_single * top;
};

void swop(node_single *x, node_single*y)
{
  int data = x->data;
  x->data = y->data;
  y->data = data;
};

void qsort()
{
  for(node_single *cur = this->begin; cur!=NULL; cur = cur->next)
  {
    node_single *min = NULL;
    int min_price = cur->price;
    for(node_single *gp = cur->next; gp!=NULL; gp = gp->next)
    {
      if(gp->price < min_price)
      {
        min = gp;
        min_price = gp->price;
      }
    }
    if(min!=NULL)
      swop(cur, min);
  }
}

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
     stack s1;
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
