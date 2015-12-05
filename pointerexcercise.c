//the pointer excercise
#include <stdio.h>

main()

{

int *p,i=10,j,k;

p=&i;

putchar(p);

*p=*p+1;

printf("%d\n",p);

printf("%d\n",p);

j= *p;

putchar(j);

k=*(&i);

printf("%d",k);

return 0;

}

