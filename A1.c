#include<stdio.h>

struct node
{
    int value;
    struct node *next;
};
struct node *head=NULL;

int main ()
{
    struct node a,b,c;
    a.value=7;
    a.next=&b;
    b.value=8;
    b.next=&c;
    c.value=9;
    c.next=NULL;

    printf("%p\t%d\t%p\n",&a,a.value,a.next);
    printf("%p\t%d\t%p\n",&b,b.value,b.next);
    printf("%p\t%d\t%p\n",&c,c.value,c.next);

    return 0;
}
