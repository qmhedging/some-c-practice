//strings comparison

#include <stdio.h>


scomp(char * s1, char * s2)

{
    int i;

    i=0;

    while (s1[i]==s2[i] && s1[i]) i++;// not a comparison of length, more like a letter matching

    return (s1[i]-s2[i]);

    printf("%d",s1[i]-s2[i]);


}

main()


{
char str1[] = "ABC",str2[10];

//printf("please input a string\n");

gets(str2);

puts(str2);

if (scomp(str1,str2)>0) printf("str1>str2\n");

else if (scomp(str1,str2)<0) printf("str1<str2\n");

else printf("str1=str2\n");




}
