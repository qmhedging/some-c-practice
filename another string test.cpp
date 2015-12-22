#include <stdio.h>

#include<string.h>

#define phrase "you're rich man!"




int main(void)


{

	
char name[40];

printf("please input your name");


scanf("%s",name);


printf("Hello %s %s\n",name,phrase);

printf("Your name as %d characters and the size is %d\n memory cells",strlen(name),sizeof(name));


printf("The phrase as %d characters and the size is %d\n memory cells",strlen(phrase),sizeof(phrase));



return 0;


}