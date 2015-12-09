//union test
#include <stdio.h>

main()

{
    union un_1

    {
        int i;

        double x;}

        s1,s2,* p;

s1.x =123.4;
printf("%4f\n",s1.x);


s1.i=100;

printf("%4f\n, %d\n",s1.x, s1.i);//there could be glitch in output s1.x

printf("%p,  %P\n",&s1.i,&s1.x);


s2=s1;

printf("%d\n",s2.i);


}


