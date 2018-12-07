Node * create(int d) // формирование нового элемента дерева
{
    Node *p = new Node;  // выделение памяти под новый узел
    p->x = d;
    p->left = NULL;    // слева нет потомков 
    p->right = NULL;   // справа нет потомков
    return p;
}
void  insert(Node **p, int d) // добавление узла в дерево поиска
{
    if (*p == NULL)
        *p = create(d);
    else
    {
        if (d < *p)->x)
            if (&(*p)->left == NULL) 
                (*p)->left = create(d);
            else 
                insert(&(*p)->left, d);
            if (d > (*p)->x)
                if (&(*p)->right == NULL) 
                    (*p)->right = create(d);
                else 
                    insert(&(*p)->right, d);
    }
}

struct Node * create_flat(int * a, int n) 
{
    struct Node* root = NULL;
    for (int i = 0; i < n; i++)
    {
        insert(&root, a[i]);
    }
    return root;
}