#include "stdio.h"

main()

{

int x,y,middle;


printf("please input x and y to exchange :\n");

scanf("%d  %d",&x,&y);

middle = y;

y = x;

x= middle;


printf("now x = %d,  y=%d ",x,y);

scanf("%d",x);



}