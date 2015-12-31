// test of flags
#include <stdio.h>

#define pages 959

int main(void)

{

	int bpwater =100,a1,a2;

	int rv,m,n,width,precision;

	double simpi=3.1415;

	int app,ppa,aap,q1,q2,k1,k2,q3,q4;

	size_t intsize;


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

	printf("now input the width and precision: \n");

	scanf("%d %d",&width,&precision);

	printf("the example of star modifier : %*.*f\n",width,precision,simpi);

	app=ppa=aap=65;

	printf("%d %d %d",app,ppa,aap);

	printf("n = %d, n has %d bytes; all ints have %lu bytes.\n", n, sizeof n,intsize);


	a1=a2=0;

	while(a1++<10)

	{
		printf("%d %d %d %d\n",a1,++a1,a2,a2++);// prefix vs postfix
	
	}

	q1=q2=1;

	//printf("%d  %d\n",++q1*2,2*q2++);

	k1=2*--q1;

	k2=2*q2--;

	printf("%d  %d\n",k1,k2);

	q3=2;

	q4=3;

	printf("%d\n",(q3+q4++)*6);



	return 0;
}