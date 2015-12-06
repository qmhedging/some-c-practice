//string copy exercise

#include <stdio.h>

void scopy(char * s,char * t)// initiate the source and target strings

{
int i;

i=0;

while ((s[i]=t[i])!='\0') i++;



}

main()

{
 char str1[20],str2[]="ABCDEFGH";

 scopy (str1,str2);

 puts(str1);
}

