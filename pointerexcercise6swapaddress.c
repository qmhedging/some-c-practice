//pointer excercise 6

#include <stdio.h>

int * fun(int *, int *);

main()

{
int * p, i,j;

printf("please input two numbers:");

scanf("%d %d",&i,&j);

p=fun(&i,&j);

printf("i=%d, j= %d,* p = %d\n",i,j,* p);

}

int * fun(int * a, int * b)


{

if (* a > * b ) return a;

return b;

}
