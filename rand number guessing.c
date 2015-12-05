#include <stdio.h> // a number guessing program

main()

{
int target,guess,right;

right = 0;

//printf("%d",rand());

target = rand();



while (right == 0)
    {
    printf("what's your guess ? ");

    scanf("%d",&guess);


    if(guess >target) {printf("Too big\n");}

    else if (guess<target) {printf("Too small\n");}

    else {
            printf ("You're right\n");

            right =1;

          }



    }



return 0;

}
