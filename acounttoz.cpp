//a to z count

#include<stdio.h>

int main(void)


{

char ch;


for (ch='a';ch<='z';ch++)


{
printf("the ASCII code for %c is %d\n",ch,ch);

}

for (ch='z';ch>='a';)

{
printf("%4c",ch);
ch--;
}


for (printf("let's guess the letter \n");ch!='k';)

{

	scanf("%c",&ch);

}

printf("Nice guess ! \n");

return 0;

}