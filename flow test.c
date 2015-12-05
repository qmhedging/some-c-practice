// the flow test

#include <stdio.h>

main()
{
int a = 2, b=-1,c=2;

if (a<b)
  if (b<0) c=0;

else c+=1;

printf("c= %d\n,   c+=1 %d\n",c,c+=1);

int k=2,w=3;

printf("so %d\n  k:  %d\n",k+=2,k);

printf("so %d\n  w:  %d\n",w++,w);

}
