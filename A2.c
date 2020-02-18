#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;

};
int main()
{
     node a,b,c;
    a.value=7;
    a.next=&b;
    b.value =8;
    b.next=&c;
    c.value=9;
    c.next=NULL;
    print(&a);
    print(&b);
    print(&c);

    return 0;
}
void print(node *x)
{
    printf("%p %d %p\n\n",x,x->value,x->next);
}



