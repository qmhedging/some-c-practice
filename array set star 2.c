//arry ex char to star2
#include <stdio.h>
#define M 10
#define B 4
void setstar (char *,int );

void arrout (char *,int );
main()

{
char c[M] ={'A','B','C','D','E','F','G','H','I','J'};

setstar(&c[4],M-B);

arrout(c,M);


return 0;
}

void setstar(char * a,int n)

{

int i;

for (i=0;i<n;i++)// set i th char and beyond to stars

     {
      * (a+i)='*';
     }

}

void arrout(char * a,int n)

{
int i;

for (i=0;i<n;i++) printf("%c",a[i]);

printf("\n");

}
