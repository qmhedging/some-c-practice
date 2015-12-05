//array ex1

#include <stdio.h>

main()



{
int a[30],i,j;


for (i=0;i<30;i++)

     {
     a[i]=i*2+1;

     }
for (j=0;j<30;j++)

     {
     printf("%4d ",a[j]);

     if ((j>1)&&((j+1)%10==0)) printf("\n");

     }


for (j=1;j<31;j++)

     {
     printf("%4d ",a[30-j]);
     if ((j>1)&&((j)%10==0)) printf("\n");

     }
return 0;

}
