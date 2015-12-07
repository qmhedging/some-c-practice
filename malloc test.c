//malloc test

#include<stdio.h>

main()

{
    short int * pi;

    float * pf;

    char * ps;

    printf("size of pi %d, size of pf %d\n", sizeof(pi),sizeof(pf));

    pi = (short *) malloc(2);

    pf= (float *) malloc(4);

      printf("size of pi %d, size of pf %d\n", sizeof(pi),sizeof(pf));

     ps = (char *) calloc(10,sizeof(char));

     printf("size of ps %d\n",sizeof(ps));
}
