//string length exercise

#include <stdio.h>

slength(char * s)

{
int n =0;

while (* (s+n)!='\0') n++;

return (n);

}

main()

{
 char str[] = "ABCDEF";

 int len1,len2;

 len1 = slength("");

 len2 = slength(str);

 printf("len1=%d,len2=%d\n",len1,len2);
}

