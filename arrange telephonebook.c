//arrange telephonebook


#include<stdio.h>

#include <string.h>

#define N 5

typedef struct

{
    char name[20];
    char num[20];
}

CONTACT;

void getdata(CONTACT *sp);

void getsort(CONTACT *sp);

void outputdata(CONTACT *sp);

main()

{
    CONTACT sp[N];

    getdata(sp);

    getsort(sp);

    outputdata(sp);
}

void getdata(CONTACT *sp)

{
    int i;

    printf("enter name & phone number:\n");

    for (i=0;i<N;i++)

       {
        gets(sp[i].name);

         gets(sp[i].num);
       }
}

void getsort(CONTACT *sp)

{
    int i,j,k;

    CONTACT temp;

    for (i=0;i<N-1;i++)

       {
        k=i;

        for (j=i+1;j<N;j++)

            {
             if (strcmp(sp[k].name,sp[j].name)>0) k=j;// exchange positions
            }
         temp=sp[k];sp[k]=sp[i];sp[i]=temp;
       }

}

void outputdata(CONTACT *sp)

{
    int i;

    printf("after sorting :\n");

    for (i=0;i<N;i++) printf("%s,%s\n",sp[i].name,sp[i].num);
}
