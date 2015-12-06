//input and output dimension 2 matrix
#include<stdio.h>

main()

{
    int row,column,i,j;

    printf("please input row and column numbers");

    scanf("%d",&row);

    scanf("%d",&column);

    int a[row][column];

    printf("Now input the matrix elements\n");

    for (i=0;i<row;i++)

       for (j=0;j<column;j++)

        scanf("%d",&a[i][j]);

    printf("Output the matrix\n");

    for (j=0;j<column;j++)
    {


        for (i=0;i<row;i++)
         printf("%4d",a[i][j]);

         printf("%p\n",&a[i][j]);//can see that only

         printf("\n");

    }

}
