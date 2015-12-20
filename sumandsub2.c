//float sumandsub2

#include<stdio.h>

void fun(double a,double b,double *p, double *q)

{
    *p = a+b;

    printf("%f\n",*p);


    *q = a-b;

    printf("%f\n",*q);



}
main()

{
    double a=10.2,b=12.3;

    fun(a,b,&a,&b);
}
