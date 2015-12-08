// sizeof test

#include<stdio.h>


main()

{

    char p[]={'1','2','3'},

    *q= p;

    printf("%d\n",sizeof(p));

    printf("%d\n",sizeof(char));

    printf("%d\n",sizeof(* q));

    printf("%d\n",sizeof(p[0]));



}
