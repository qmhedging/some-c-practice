#include <stdio.h>

int main()


{
    int m,n,t;
    printf("m=");
    scanf("%d",&m);
    printf("n=");
    scanf("%d",&n);
    printf("t=");
    scanf("%d",&t);//input the parameters

    int arr[m][n];

    int i,j;

    for (i=0;i<m;i++) {
                      for (j=0;j<n;j++)

                                 {
                                 printf("element input");
                                 scanf("%d",&arr[i][j]);
                                  }
                       }// input array element


    if (t==0) {
               for (i=0;i<m;i++)
                         {
                    for(j=n-1;j>-1;j--){printf("%d",arr[i][j]); printf(" ");}
                    printf("\n");
                         }
              }
    if (t==1) {
               for (i=m-1;i>-1;i--)// be careful with the elements starts from 0
                         {
                    for(j=0;j<n;j++){printf("%d",arr[i][j]);printf(" "); }
                         printf("\n");
                         }
              }

   return 0;
}
