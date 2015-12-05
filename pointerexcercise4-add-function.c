//pointer excercise 4

#include<stdio.h>

int myadd(int * a,int * b)

{int sum;

sum = *a + * b;

return sum;

}

main()

{

int x,y,z;

printf("Please enter x,y:");

scanf("%d %d",&x,&y);

z= myadd(&x,&y);

printf("%d + %d = %d \n",x,y,z);

return 0;

}
