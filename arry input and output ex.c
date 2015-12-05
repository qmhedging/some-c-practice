//array ex 2

#include <stdio.h>

#define M 10 //we'll input 100 numbers

void arrout(int *,int);

int arrin(int *);

main()

{
int s[M],k;

k=arrin(s);

arrout(s,k);

}

void arrout(int * a,int n)//the output part

{
int i;

for (i=0;i<n;i++)

printf(((i+1)%5==0)?"%4d\n":"%4d",*(a+i));

printf("\n");
}

int arrin(int a[M])//the input part

{
int i,x;

i=0;

scanf("%d",&x);

while(x>=0)

     {
     * (a+i)=x;

     i++;

     scanf("%d",&x);

     }

     return i;

}
