//bitwise operation

#include <stdio.h>

main()

{
    int a,b,c,d;

    char e,f;

    a=0262;

    printf("a,~a %d %d\n",a,~a);

    b=6;

    printf(" b<<2 %d\n",b<<2);

    e=64;

    printf(" e>>4 %d\n",e>>4);//e000100

    printf("b&e %d\n",b&e);//b 011000 so e & b = 0

    printf(" 12&10 %d\n",12&10);

    printf("e^b %d\n",e^b);//000100 ^ 011000 = 1000110

    printf("2^4 %d\n",2^4);//000010
                         //000100  =000110= 6

    printf("2|4 %d\n",2^4);//000010
                         //000100  =000110= 6
}
