//prime number filter

#include <stdio.h>

#include <math.h>

enum {NUM = 20000};

int a[NUM+1];

int main()

{

int i,j,upd =sqrt(NUM+1);

a[0]=a[1] =0; //for 0 and 1 are not primes


for (i=1;i<=NUM;++i)

     {
     a[i] = 1;//initiall all numbers marked as primes

     }


for (i=4;i<=NUM;++i)

{



for (j=2;j<i;++j)

{



     if (i % j==0)

              {
               a[i] =0;
              }
}

}

for (i=0;i<=NUM;++i)

           {
               if (a[i]!=0)

                   {
                    printf("%d\n",i);
                   }

           }





}

