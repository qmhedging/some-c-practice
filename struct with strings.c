// the struct name test

#include <stdio.h>


struct names{char name[3]};


int main()

{

struct  names namelist;

int i;



for (i=0;i<3;i++)


   {
    printf("input name %d\n",i);

    scanf("%s",namelist.name[i]);


   }


for (i=0;i<3;i++)


   {
    printf("so your name is %s\n",namelist.name[i]);




   }











}
