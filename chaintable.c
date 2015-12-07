//chaintable

#include<stdio.h>

struct node

{
    int data;

    struct node *next // struct links to itself
};

typedef struct node NODETYPE;

main()

{
    NODETYPE a,b,c,* h,* p;

    a.data =10;

    printf("%p\n",&a);

    b.data=20;

    printf("%p\n",&b);

    c.data = 30;

    printf("%p\n",&c);

    h=&a;

    printf("%p\n",&h);

    a.next = &b;

    b.next =&c;

    c.next ='\0';

    p=h;

    while(p)

        {
          printf("%d\n",p->data);// output a,b,c..value through p

          printf("%p\n",&p);

          p=p->next;
        }
     printf("\n");
}
