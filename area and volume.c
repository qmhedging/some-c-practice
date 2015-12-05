//area and volume of a rectangle

#include <stdio.h>

main()

{
double a,b,c,s,v;

printf("input a, b, c:\n");

scanf("%lf %lf %lf",&a,&b,&c);

s= a*b;

v= a*b*c;

printf("%7lf %7lf %7lf",a, b, c);

printf("s= %7lf\n, v = %7lf\n", s, v);

}
