// while sum test

#include<stdio.h>

int main(void) 


{

int status,num,sum;


sum = 0;

printf("please input an integer,press q to quit\n");


status=scanf("%d",&num);// a nice to trick to input the num and judge whether it's an integer 




while (status == 1)

{

sum = sum+num;

printf("now the sum is %d\n",sum);

status=scanf("%d",&num);
}

return 0;

}