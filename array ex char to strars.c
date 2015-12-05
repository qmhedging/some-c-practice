//arry ex setstar

#include<stdio.h>

main()

{

char inputchar[10];

int i;

//printf("please input 10 chars:\n");


for (i=0;i<9;++i)

    {
    scanf("%c\n",&inputchar[i]);

    if (i>2) inputchar[i] = '*';
    }


printf("the chars became: \n");

for (i=0;i<10;++i)

    {
    printf("%c\n",inputchar[i]);
    }

return 0;
}
