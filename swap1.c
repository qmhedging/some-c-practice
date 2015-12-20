//swap1

#include<stdio.h>

void swap(int *p,int *q)

{
    int *t,a;

    t=&a;//initiate t with address of a integer

    printf("%d\n",a);

    *t=*p;

    *p=*q;

    *q=*t;
}

main()

{
    int a= 10,b=20;

    swap(&a,&b);

    printf("%d  %d\n",a,b);
}
