// union test2 digits out
#include<stdio.h>




    union change {char c[2];int a;} un;

    main()

    {
     un.a =16961;

     printf("%d, %c\n",un.c[0],un.c[0]);

     printf("%d, %c\n",un.c[1],un.c[1]);
    }



