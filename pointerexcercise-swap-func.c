//pointer excercise 5

#include<stdio.h>

void swap(int *,int *);

main()

{
int x= 30,y=20;

printf("(1)x=%d y=%d\n",x,y);

swap(&x,&y);

printf("(4)x=%d  y=%d\n",x,y);

}



void swap(int * a,int * b)

{
int t;

printf("(2)a= %d b = %d\n", * a,* b);

t= * a; * a = * b;* b= t;

printf("(3)a=%d b= %d\n",*a ,* b);

}
