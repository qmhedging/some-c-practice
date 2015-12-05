#include<stdio.h>  // 包含stdio.h头文件
int max(int, int);  // 函数声明
int main(){
int n, i,j,key ;

printf("Enter how many elements you want: ");

scanf("%d",&n);


int arr[n];

for(i=0;i<n;i++)///input the array

    {


      printf("Enter the");

      printf(" %d",i+1);

      printf("th element of the array:");

      scanf("%d",&arr[i]);

     }
printf("the array is  ");

for(i = 0; i < n; i++)
    {
    printf("%d,", arr[i]);
    }
for (j=1;j<n;j++)

    {
    key = arr[j];

    i = j -1;


    while (i>=0 && arr[i]>key)
          {
           arr[i+1]=arr[i];// arr[i+1] became the bigger num
           arr[i]=key; // arr[i] became the smaller num
           i=i-1;


          }
    }
printf("the result is  ");// output the result

for(i = 0; i < n; i++)
    {
    printf("%d,", arr[i]);
    }
}
