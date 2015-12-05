// biggest of the three

#include<stdio.h>

main()

{

int a,b,c,max;

printf("please input three numbers\n");


scanf("%d %d %d",&a,&b,&c);

max = a;

if (b> max)


       {
       max=b;
       if (c>max) {max= c;}
       }

else if (c>max) max =c;




printf("Max is %d\n",max);



}
