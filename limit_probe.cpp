// a probe into limits

#include<stdio.h>

#include<limits.h>

#include<float.h>

int main(void)

{

printf("some number limits for this system : \n");

printf("biggest int: %d\n",INT_MAX);

//printf("smallest long long: %ld\n",llong_MIN);

printf("one byte = %d bits on this system \n",CHAR_BIT);

printf("largest double: %e\n",DBL_MAX);

printf("smallest normal float: %e\n", FLT_MIN);

printf("float precision = %d digits\n",FLT_DIG);

printf("float epsilon = %e\n",FLT_EPSILON);


printf("only %d%% of people are smart\n",2);
return 0;
}