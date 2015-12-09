//file output test3 with function


#include<stdio.h>
#include<stdlib.h>

void fileoutput(FILE);

main()

{

char ch,chout;


FILE * fp;

printf("open the file %s","testfile.txt");


fp=fopen("testfile.txt","w");

if ((fp=fopen("testfile.txt","w"))==NULL)

   {
    printf("can not open this file ! \n");

    exit(0);
   }

   ch = getchar();//input some chars from keyboard

   while(ch != '@')

   {
       fputc(ch,fp);

       ch=getchar();
   }

   fileoutput(* fp);

printf("%d\n",fclose(fp));// when you close a file the fclose return 0.

}

fileoutput(FILE *f)

{

char ch;

if (f=fopen("testfile.txt","r")==NULL)

{
    printf("can't open the file\n");

    exit(0);
}

ch = fgetc(f);

while(ch!=EOF)

{
    putchar(ch);

    ch=fgetc(f);

    printf("%s","worked");
}
return ch;
}
