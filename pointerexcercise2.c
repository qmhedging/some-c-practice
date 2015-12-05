//pointer excercise 2

#include <stdio.h>

main()

{
int a,b,min,* pa,* pb,* pmin;

pa = &a;pb=&b;pmin =&min;

scanf("%d %d",pa,pb);

printf("a=%d b= %d\n",a,b);

* pmin = * pa;

if(*pa>*pb) {* pmin = * pb;}

printf("min = %d\n",min);

}

