#include <stdio.h>

main()

{



int number, counter=0;


for (number = 1; number < 10000;number++) {

                                             if (number % 2 ==0 || number % 3 ==0) {counter++;}

                                             if (counter==2333) {printf("%d",number);}



                                            }



return 0;

}
