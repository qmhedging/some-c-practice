//struct with array

#include <stdio.h>

typedef struct

{
    int num;

    double mark;
}  REC;

void sub1(REC  x)

{
 x.num = 23;

 x.mark = 81.5;
};

void sub2(REC y[])

{
    y[0].num =12;y[0].mark = 77.5;// it's proper to manipulate struct elements with array and pinter
};

REC fun(REC target)
{
    target.num =23;

    target.mark = 81.5;
};

main()

{
    REC a ={16,90.0},b[]={16,90.0};

    sub1(a);

    printf("A) %d, %5.1lf\n",a.num,a.mark);

    sub2(b);

    printf("B) %d,%5.1lf\n",b[0].num,b[0].mark);

    fun(a);

    printf("C) %d, %5.1lf\n",a.num,a.mark);
}
