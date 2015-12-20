//swap2

#include<stdio.h>

void swap(int *p,int *q)

{
    int t;





    t=*p;

    printf("%d\n",t);

    *p=*q;

    *q=t;
}

main()

{
    int a= 10,b=20;

    swap(&a,&b);

    printf("%d  %d\n",a,b);
}
