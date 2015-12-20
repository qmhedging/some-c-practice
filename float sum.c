//float sumandsub

#include<stdio.h>

void sum(double *p, double *q)

{
    printf("%f\n",*p+*q);

    printf("%f\n",*p-*q);
}
main()

{
    double a=10.2,b=12.3;

    sum(&a,&b);
}

