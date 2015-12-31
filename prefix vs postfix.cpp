//the prefix and postfix test

#include<stdio.h>

void pound(int n);

int main(void)

{

int i,j;

char cot;

int fail = 6.0f;

i=j=0;


while(i++<10) //compare first then add

{
printf("%d\n",i);
}


while(++j<10) //add first then compare 

{
printf("%d\n",j);
}


i=j=0;

while(i<10)

{
printf("%d\n",i++);
}


while(j<10)

{
printf("%d\n",++j);
}


i=0;

while (i<300)

{
printf("i= %d,  %2c",i,i);

i++;
}

cot ='i';

pound(cot); //can run as c transit char into int

pound(fail);// can't run as c doesn't transit float

printf("the result is %d\n",(3+2)*10.5);

return 0;



}

void pound(int n)

{

while (n-->20)

{
	
	printf("*");



}





}


