//pi guessing

#include<stdio.h>

#include<math.h>

int main(void)

{

	double pi=3.1415926;


	double guess;



	printf("please input the number you think as pi : \n");

	scanf("%lf",&guess);


	while(fabs(pi-guess)>0.0001)


	{
	printf("Not enough,try again\n");

	scanf("%lf",&guess);
	
	}


	printf("That's nice guess !\n");


	return 0;

}