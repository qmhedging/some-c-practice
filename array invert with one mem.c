//array reverse with only one mem unit

#include <stdio.h>

#define NUM 8

void invert(int *,int);

void priout(int *,int);

main()

{



int a[NUM]={10,20,30,40,50,60,70,80};

printf("Output primary data :");

priout(a,NUM);

invert(a,NUM);

printf("Output the inverted data:");

priout(a,NUM);

}

void priout(int s[],int n)
{
    int i;

    for (i=0;i<n;i++)

        printf("%4d",s[i]);

    printf("\n");
}

void invert (int * a,int n)

{
    int i,j,t;

    i=0;

    j=n-1;

    while(i<j)

    {
        t=a[i];a[i]=a[j];a[j]=t;
        i++;j--;

        printf("a[%d] address %p\n",i,&a[i]);

        printf("a[%d] address %p\n",j,&a[j]);


    }
}
