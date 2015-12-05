//the sin approximation

#include <stdio.h>

main()

{

double x1,x2;

int times=0;

x1=0.0;

x2=sin(x1);


while (fabs(x1-x2)>1e-9)


  {
  x1=x2;

  x2=sin(x1);

  ++times;
  }
printf("X= %7lf, sin(X)=%7lf\n",x1,sin(x1));

printf("run times = %d\n",times);



return 0;

}
