//string copy exercise

#include <stdio.h>

void scopy(char * s,char * t)// initiate the source and target strings

{
int i;

i=0;

while ((s[i]=t[i])!='\0') i++; //first assign t[i] to s[i] then judge the end



}

void strcopy2(char* s,char * t)// copy with pointers

{
    while ((*s = * t)!='\0')
        {
            s++;
            t++;
        }
}

main()

{
 char str1[20],str2[]="ABCDEFGH",str3[]="IJKLMNOP";

 scopy (str1,str2);

 puts(str1);

printf("%p\n",str1);

 strcopy2(str1,str3);

 puts(str1);
 printf("%p\n",str1);

}

