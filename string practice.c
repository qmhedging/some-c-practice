//string practice

#include <stdio.h>

main()

{

char s[10],str[]="hello!",k[10];

printf("please input the string\n");


scanf("%s",s);

printf("output %s\n",s);

//s="hello";

printf("output %d\n",sizeof(s));

putchar(s);

//str[]="hello!"

printf("%c",str);

printf("now try gets:\n");

gets(k);

printf("then output \n");
puts(k);

puts(&str[2]);




}
