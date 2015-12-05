// into minutes and hours

#include <stdio.h>

main()

{
int timegot = 560, hours, minutes;

double a,b,c,t,ave;

hours = (int) 560/ 60;

minutes = 560 % 60;

printf("input 3 numbers \n");

scanf("%lf %lf %lf",&a,&b,&c);//always use %lf for type double

ave = (a+b+c)/3;

printf("average is %.1f\n", ave);

t=a; a =c; c=b; b=t;

printf("now a b c is %lf  %lf  %lf \n",a, b, c);



printf("into hours %d hours %d minutes\n",hours, minutes);

printf("division is %d, remainder is %d\n", (int) 1500/350, 1500%350);



return 0;
}
