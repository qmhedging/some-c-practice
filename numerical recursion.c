//numerical recursion of square root

#include <stdio.h>

#include <math.h>

double mysqrt(double a, double x0)

{
    double x1;// local variable

    x1=(x0+a/x0)/2.0;

    if (fabs(x1-x0)>0.00001) return mysqrt(a,x1);

    else return x1;
}

main()

{
    double a;//global variable
    printf("please enter a: \n");

    scanf("%lf",&a);

    printf("the sqrt of %f = %f\n",a,mysqrt(a,1.0));
}
