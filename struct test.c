// struct test

#include<stdio.h>

main()

{
    struct date

    {
        int year,month,day;

    };

    struct student

     {
         char name[12];

         char sex;

         struct date birthday;

         float sc[4];
     }

     std ={"Bill simon",'M',1982,5,10,88,76,85.5,90};
     struct student * ps,arr[5];

     ps=&std;

     printf("%c\n",std.sex);

     putchar(std.sex);

     printf("\n");

     printf("the name is %s\n",ps->name);

     putchar(arr[0].sex);
}
