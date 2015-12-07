//assign value to struct

#include<stdio.h>

typedef struct

{
char s[10];

int t;
}

ST;//defined a type ST

getdata(ST * p) // define a function to get data

{
    scanf("%s %d",p->s,&p->t);
}

main()

{
    ST a;

    getdata(&a);

    printf("%s, %d\n",a.s,a.t);
}
