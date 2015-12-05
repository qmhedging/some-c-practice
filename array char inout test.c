// input char test

#include<stdio.h>

main()


{

char chars[5];

int i;


for (i=0;i<5;++i)
     {
     printf("please input a char:\n");
     scanf("%c\n",&chars[i]);
     if (i>2) chars[i] = '*';
     }

 for (i=0;i<5;++i)
     {
     printf("the %d th char %c \n",i,chars[i]);
     }

return 0;


}
