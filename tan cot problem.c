//tan cot problem

#include<stdio.h>

#include<math.h>

double tran(double(*)(double),double(*)(double),double);

main()
{
    double y,v;

    v=60*3.1416/180.0;

    y=tran(sin,cos,v);

    printf("tan(60)=%10.6f\n",y);


    y= tran(cos,sin,v);

    printf("cot(60) = %10.6f\n",y);


}

double tran(double (*f1)(double),double(*f2)(double),double x)

{
    return (*f1)(x)/(*f2)(x);
}
