#include<stdio.h> //output an 10*10 matrix

main()

{

int a[9][9],i,j;


for (i=0;i<10;i++)

   for (j=0;j<10;j++)

   {
       a[i][j]=(i+1)*(j+1);
	   
	   printf("%4d",a[i][j]);

	   if ((j+1)%10 ==0) printf("\n");

   }

   return 0;

}