//pointer test

#include<stdio.h>

main()

{
    int * p,i=100,j;

    p = &i;

    puts(p);

    printf("%p\n",p);//the address p stored

    printf("%p\n",&p);//the address p itself

    j = * p;

    putchar(j);

    printf("%d\n",j);

    j=*p+1;

    printf("%d\n",j);

    printf("%p\n",NULL);




}
