// predefined macro

#include <stdio.h>

#define MU(X,Y) (X*Y)

static main()

{

    int a,b;

    printf("please input a and b : \n");

    scanf("%d %d",&a,&b);

    printf("a and b are %d  %d\n",a,b);

    printf("%d",MU(a,b));

    return 0;




}
