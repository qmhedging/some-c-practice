// fibonacci 30

#include <stdio.h>

long fab[30];

main()


{


int i,j;




fab[0] = 1;

fab[1] =2;

for (i=2;i<30;++i)

     {

     fab[i] =fab[i-1] + fab[i-2];

     }


 for (j=0;j<30;++j)


     {
     printf("%5d\n",fab[j]);
     }




}
