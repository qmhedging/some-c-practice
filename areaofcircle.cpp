#include "stdio.h"
#include"stdlib.h"

main()

{

float r,pi,area;


	pi=3.1415926;


	printf("please input the radius of a circle \n");

	scanf("%f",&r);

	area = pi*r*r;

	printf("the area of the circle is %f",area);

	system("pause"); 

}