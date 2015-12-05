//case selection
#include <stdio.h>

main()

{

int a,b,m;

printf("please input a:\n");

scanf("%d",&a);

b = (int) a / 10;

switch (b)

{
case 5: m=4; break;

case 4:m=3;break;

case 3:m=2;break;

case 2:m=1;break;

default: m=5;
}

printf("m= %d",m);

return 0;

}
