//the prime number filter

#include <stdio.h>


main()
{


int numbers, i, tag,timer =0;;



printf("2\n");

for (numbers=3; numbers<100; numbers+=2)

     {
         tag =1;
     for (i=2;i<sqrt(numbers)+1;i++)

         {
             ++timer;
         if (numbers % i == 0) {tag = 0;/*printf ("i=%d\n, numbers = %d\n",i,numbers);*/}


         }

       if (tag ==1) {printf("%d\n",numbers);tag =1;}

     }

     printf("time is %d\n",timer);
}
