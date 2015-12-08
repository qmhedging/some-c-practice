// getchar test

#include <stdio.h>
main()

{
    char a,b,c,d;

    scanf("%c%c",&a,&b);

    c= getchar();//can only take one char,including <CR>

    d=getchar();

    printf("%c%c%c%c\n",a,b,c,d);


}

