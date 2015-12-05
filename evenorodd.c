// odd or even

#include<stdio.h>

main()

{
int anumber,s;



printf("please input an integer number");

scanf("%d",&anumber);



s= anumber%2==0 ? 0:1;

switch (s)

{



case 0: printf("so it is even");break;

case 1:printf("so it is odd");break;

}

return 0;


}
