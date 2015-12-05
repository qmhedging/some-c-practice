// another number guessing game which player can set the range

#include <stdio.h>

int next();

int getrange();

int getnumber (int limit);

main()


int m, unknown,guess;

if ((m=getrange())<0) return 1;
