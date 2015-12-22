// test of flags
#include <stdio.h>

#define pages 959

int main(void)

{

	int bpwater =100;

	int rv,m,n;


	printf("*%d*\n",pages);

	printf("*%4d*\n",pages);

	printf("*%10d*\n",pages);

	printf("*%-10d*\n",pages);

	rv=printf("the boiling temp for water is %d degrees\n",bpwater);

	printf("printf function had printed %d characters\n",rv);

	// comma test

	printf("here's the comma test :\n");

	scanf ("%d %d",&m,&n);

	printf("first number is %d, second number is %d\n",m,n);



	return 0;
}