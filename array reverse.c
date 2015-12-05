// reverse the array order

//enable user to input an array and the program reverse the order and output the array

#include<stdio.h>


void arrayinput(int *,int);

void arrayreverse(int *, int);



main()

{



int n;



printf("please input how many elements you want to enter:\n");

scanf("%d",&n);

int arr[n];

arrayinput(arr,n);

arrayreverse(arr,n);



}


void arrayinput(int * arr,int n)

{



 int i;

 printf("now input the numbers:");

 for (i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }



}

void arrayreverse(int * a,int n)

{
    int * b[n],i;

    for (i=0;i<n;i++)

    {
         b[n-1-i]= a[i];// be careful, start with b[n-1] and don't use &,for & will assign the address, not value

    }

    for (i=0;i<n;i++)

    {
    printf("%d\n",b[i]);
    }


}

