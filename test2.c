///test 2

#include<stdio.h>

main()

{
int m = 0;

int i;

void format(void)
     {
     if (++m==10)

         {
          putchar("10\n");
          m=10;
         }


      else putchar("a");
     }
for (i=1;i<31;i++)

    {
    format;

    printf("%d\n",i);
    }

return 0;
}
