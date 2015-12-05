// the xmas tree

#include<stdio.h>

main()

{

int i,j;


for (i=0;i<4;++i)

   {printf("   \n");
   for (j=7-i*2;j>0;--j)
       {printf("%s","*");

       }

   }


return 0;

}
