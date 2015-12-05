// the xmas tree 2

#include<stdio.h>

main()

{

int i,j,k;


for (i=0;i<4;++i)

   {for (k=0;k<i;k++) printf(" ");
    for (j=7-i*2;j>0;--j)printf("*");
    printf("\n");


   }


return 0;

}
