//pointer test 2

#include<stdio.h>

void sub(double x, double * y, double * z)

{
    *y = *y-1.0;

    printf("%f %f %f\n",x,*y,*z);

    *z=*z+x;

    printf("%f %f %f\n",x,y,z);
}
main()

{
    double a=2.5,b=9.0,*pa,*pb;



    pa = &a;

    pb= &b;

    sub(b-a,pa,pa);

   printf("%f\n",a);
}
