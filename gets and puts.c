// gets and puts

#include<stdio.h>

main()

{

    char str[10];

    printf("please input: \n");

    gets(str);

    puts(str);

    puts(&str[3]);



}
