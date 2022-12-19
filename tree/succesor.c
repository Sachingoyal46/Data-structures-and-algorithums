
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
};
//*********************************
struct node *makenode(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
//*******************************************************************
void preordertraversal(struct node *t)
{
    if (t != NULL)
    {
        printf(" %d ", t->data);
        preordertraversal(t->left);
        preordertraversal(t->right);
    }
}

void postordertraversal(struct node *t)
{
    if (t != NULL)
    {
        postordertraversal(t->right);
        postordertraversal(t->left);
        printf(" %d ", t->data);
    }
}

void inordertraversal(struct node *t)
{
    if (t != NULL)
    {
        inordertraversal(t->left);
        printf(" %d ", t->data);
        inordertraversal(t->right);
    }
}
//*********************************************

void bst(struct node **t, int x)
{
    struct node *p, *q;
    p = *t;
    q = NULL;
    if (*t == NULL)
    {
        *t = makenode(x);
    }
    else
    {

        while (p != NULL)
        {
            if (x < p->data)
            {
                q = p;
                p = p->left;
            }
            else
            {
                q = p;
                p = p->right;
            }
        }
        if (x < q->data)
        {
            q->left = makenode(x);
        }
        else
        {
            q->right = makenode(x);
        }
    }
}
//****************************************
struct node *maximum(struct node *t)
{
    while (t->right != NULL)
    {
        t = t->right;
    }
    return t;
}
//********************************************
struct node *minimum(struct node *t)
{
    while (t->left != NULL)
    {
        t = t->left;
    }
    return t;
}
//**************************************
struct node *bst_search(struct node *t, int key)
{
    while (t != NULL)
    {
        if (t->data == key)
        {
            return t;
        }
        else
        {

            if (key < t->data)
                t = t->left;

            else

                t = t->right;
        }
    }
    return NULL;
}

struct node *succesor(struct node *p)
{
    struct node *q;
    if (p->right != NULL)
    {
        q = minimum(p->right);
        return q;
    }
    else
        q = p->father;
    while (q != NULL && q->right == p)
    {
        p = q;
        q = q->father;
    }
    return q;
}
//***************************************************
struct node *predecessor(struct node *p)
{
    struct node *q;
    if (p->left != NULL)
    {
        q = maximum(p->left);
        return q;
    }
    else
        q = p->father;
    while (q != NULL && q->left == p)
    {
        p = q;
        q = q->father;
    }
    return q;
}
//*********************************
int main()
{
    struct node *root = NULL;
    bst(&root, 100);
    bst(&root, 50);
    bst(&root, 70);
    bst(&root, 130);
    bst(&root, 150);
    bst(&root, 20);
    bst(&root, 40);

    //   inordertraversal(root);
    //   printf("\n");
    //   maximum(root);
    //   printf("\n");
    //   minimum(root);
    printf(" %d", succesor(bst_search(root, 70))->data);
    printf("%d", predecessor(bst_search(root, 70))->data);
}