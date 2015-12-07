//n factorial

#include<stdio.h>

int fac(int n)

{

if (n==0) return 1;

    else return n*fac(n-1);


}

main()

{
    int n;

    printf("please input N:\n");

    scanf("%d",&n);

    printf("Factorial = %d",fac(n));

    return 0;

}
