//swap3

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
    int a= 10,b=20,* x = &a, *y = &b;



    swap(x,y);

    printf("%d  %d\n",a,b);
}
