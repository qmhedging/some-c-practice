//a random number test

#include <stdio.h>
#include <stdlib.h>

main()

{

int k,i;

i=20;

while (i>0)

{



k=rand()%20;

printf("%d\n",k);

i--;
}

return 0;



}
