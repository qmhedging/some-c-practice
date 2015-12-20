#include<stdio.h>


void butler(void);// prototype-function declaration 

int main(void)

{

printf("Now, I'll call the butler.\n");


butler();// the function called

printf("Yes,please bring me some beer.\n");


return 0;

}

void butler(void)

{
printf("You rang, sir?\n");
}


