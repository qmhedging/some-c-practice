#include<stdio.h>

main()
{

int i = 3,j=3,result,result2;


result = -i++;
printf("%d\n",result);

printf("%d\n",i);

result2 = -++j;
printf("%d\n",result2);

printf("%d\n",j);



return 0;

}
