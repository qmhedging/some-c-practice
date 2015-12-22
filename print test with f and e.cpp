#include <stdio.h>

#include<math.h>

#include <stdlib.h>

#define Phrase "you're rich!"

//print out test with f and e

int main(void)

{

double i=228.33;

float toobig =3.4e38*100.0f;

float salary;

printf("%f\n",i);

printf("%e\n",i);


printf("%x\n",i);


printf("%a\n",i);// requires C99 com

printf("%e\n",toobig);

printf("%f\n",asin(0.88));


// more on type size

printf("the size of int is %d\n",sizeof(int));

printf("the size of long is %d\n",sizeof(long));

printf("the size of short is %d\n",sizeof(short));

printf("the size of unsigned is %d\n",sizeof(unsigned));

printf("the size of float is %d\n",sizeof(float));

printf("the size of double is %d\n",sizeof(double));

printf("%#o\n",12);

printf("%c\n",'/011');





printf("the size of long unsigned is %d\n",sizeof(long unsigned));

printf("the size of long float is %d\n",sizeof(long float));

printf("the size of long double is %d\n",sizeof(long double));

printf("the size of char is %d\n",sizeof(char));


printf("so what's your desired monthly salary ? ");

printf("enter $______\b\b\b\b\b\b");

scanf("%f",&salary);

printf("\n\t%.2f a month is %.2f a year.",salary,salary*12);

printf("\rGee!\n");


printf(Phrase);

return 0;



}