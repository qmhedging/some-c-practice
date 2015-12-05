//three number sum2
#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
#define N 3

void getrand(int *,int);// both use pointers

void getsum(int *,int *,int);

void priarr(int *,int);

main()

{
int x[SIZE],w[SIZE/N]={0};

getrand(x,SIZE);

printf("Output %d random numbers:\n",SIZE);

priarr(x,SIZE);

getsum(x,w,SIZE);

printf("Output 5 sum numbers:\n");

priarr(w,SIZE/N);

}

void getrand(int * a,int n)

{
int i;

for (i=0;i<n;i++)

    {
     a[i]= rand()%50;//generate random number range from 1-49
    }
}

void getsum(int *a,int *b,int n)

{
int i,j,sum;

for (sum=0,i=0,j=0;i<n;i++)

 {
  sum+=a[i];

  if ((i+1)%3==0)

      {
       b[j]=sum;
       sum =0;
       j++;
      }
 }
}

void priarr(int * a,int n)

{
    int i;
    for(i=0;i<n;i++)
    {


        printf("%5d",a[i]);
        if ((i+1%5)==0) printf("\n");

    }

    printf("\n");
}
