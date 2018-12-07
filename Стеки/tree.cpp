#include <stdio.h>
#include <stdlib.h>

struct node {
    int tag;
    struct node * l, *r, *p;
};

void insert(struct node ** tr, struct node *n)
{
    if (!(*tr)) 
    {
        *tr = n;
        (*tr)->l = NULL;
        (*tr)->r = NULL;
        (*tr)->p = NULL;
        return;
    }
    if (n->tag >= (*tr)->tag)
    {
        insert(&((*tr)->r), n);
        if (!(*tr)->r->p) (*tr)->r->p = *tr;
    }
    else
    {
        insert(&((*tr)->l), n);
        if (!(*tr)->l->p) (*tr)->l->p = *tr;
    }
}

void insert(struct node ** tr, int t)
{
    struct node *n = (struct node *) malloc(sizeof(struct node));
    n->tag = t;
    insert(tr, n);
}
void print(struct node * tr)
{
    if (!tr) return;
    print(tr->l);
    printf("%d ", tr->tag);
    print(tr->r);
}

int get_deep(struct node * tr)
{
    if (!tr) return 0;
    int dl = get_deep(tr->l), dr = get_deep(tr->r);
//    printf("dl: %d   dr: %d\n", dl, dr);
    return (dl>dr ? dl : dr)+1;
}

void print_tree_deep(struct node * tr, int deep)
{
    if (!tr) 
    {
        if (!deep) printf("n");  
//        else printf(" ");
        return;
    }
    if (!deep) printf("%d|%d", tr->p? tr->p->tag: 0, tr->tag);
    else
    {
//        printf("deep: %d ", deep);
        print_tree_deep(tr->l, deep-1);
        printf(" ");
        print_tree_deep(tr->r, deep-1);
        printf(" ");
    }
}

void print_tree(struct node * tr)
{
    int n = get_deep(tr);
    printf("n: %d \n", n);
    for (int i=0; i<n; i++)
    {
//        for (int j=0; j<n-i; j++)
//            printf("   ");
        print_tree_deep(tr, i);
        printf("\n");
    }
}
struct node *search_tag(struct node *tr, int t)
{
    if (!tr) return NULL;
    if (tr->tag == t) return tr;
    struct node *n = search_tag(tr->l, t);
    if (n) return n;
    n = search_tag(tr->r, t);
    return n;
}

void delete_tag(struct node ** tr, int tag)
{
    if (!tr || !(*tr)) return;
    struct node *nd = search_tag(*tr, tag);
    if (!nd) return;
    struct node *nl = nd->l, *np = nd->p, *nr = nd->r;
    if (nd->p)
        if (nd->p->l == nd) nd->p->l = nl;
        else nd->p->r = nl;
    nl->p = nd->p;
    insert(&(nl->r), nr);
}

int main()
{
    int n=20, a[] = {5,2,4,8,7,8,6,5,3,4,1,2,3,0,4,3,6,3,2,6,7,4,5,2,7,9,4,2,5,7,8,6};
    struct node *rt = NULL;
    for (int i=0; i<n; i++)
    {
        insert(&rt, a[i]);
        print(rt);
        printf("\n");
    }
    printf("\n");
    print_tree(rt);
    delete_tag(&rt, 6);
    print_tree(rt);
    system("PAUSE");
    return 0;
}
