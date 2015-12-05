//pointer excercise 3

#include <stdio.h>

main()

{
int a[5]={11,22,33,44,55};

int *p= &a[0],*q=&a[2],i,j,k;// so to issue value to pointer always use "&"

q=p+2;//q points to a[2]

q++; //q points to a[3]

q++;//q points to a[4]

q--;//q points to a[3]

p++; //p points to a[2]

i=*p; j= *q;

k = q - p;

printf("i=%d  j=%d   k=%d",i,j,k);

return 0;



}
