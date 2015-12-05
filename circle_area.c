#include<stdio.h>
#define PI 3.1415926/* define the pi value */



    double circle_area(double r)

           {
               //printf("%f",&r);
               return r*r*PI;

           }

main()

{


   double radius,s;

   printf("radius ?");

   scanf("%lf",&radius);// be careful to use lf instead of f

   s= circle_area(radius);

   printf("s=%f\n",s);





}
