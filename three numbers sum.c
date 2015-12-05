//three number sum
#include <stdio.h>
#include <stdlib.h>

#define M 15

#define Step 3



int randomGenerator(int);
void arrout(int *,int);
void stepsum(int *,int,int);


main()

{

int i,a[M];

for (i=0;i<M;++i) {a[i]=randomGenerator(50);}



arrout(a,M);

stepsum(a,Step,M);

//printf("%d",a[0]+a[1]+a[2]);

return 0;

}

int randomGenerator(int uplimit)

{
          int b;

          b=rand()%uplimit;

          return b;
}

void arrout(int * a,int n)

{
    int i;

    for (i=0;i<n;++i)
        {
            printf("%3d\n",a[i]);

            printf("\n");
        }
}

void stepsum(int * a,int step,int length)

  {
      int i,j,sum=0;// don'tforget toinitiate sum


      for (i=0;i<length;++i)

      {
      if (((i+1)%step==0) && (i>0))

         {
          for (j=i;j>i-step;j--)

          {
            sum+=a[j];
            printf("a @ %d",j);
          }
          printf("%3d\n",sum);
          sum = 0;
         }
      }
  }



