// a boolean test

#include<stdio.h>

int main(void)

{

long num;

long sum =0L;

int input_is_good; // so boolean doesn't work for vc98

printf("please enter an integer to be summed ");

printf("(q to quit) :");

input_is_good=(scanf("%ld",&num)==1);

while (input_is_good)

{

sum =sum+num;

printf("please enter next integer (q to quit) :");

input_is_good = (scanf("%ld",&num)==1);

}

printf("Those integers sum to %ld.\n",sum);

return 0;


}