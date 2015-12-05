//the cos approximation

#include <stdio.h>

main()

{

double x1,x2;

int times=0;

x1=0.0;

x2=cos(x1);


while (fabs(x1-x2)>1e-9)


  {
  x1=x2;

  x2=cos(x1);

  ++times;
  }
printf("X= %7lf, cos(X)=%7lf\n",x1,cos(x1));

printf("run times = %d\n",times);



return 0;

}
