//file output test


#include<stdio.h>
#include<stdlib.h>

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

chout = fgetc(fp);

while(chout!=EOF)

{
    putchar(chout);

    chout=fgetc(fp);
}


printf("%d\n",fclose(fp));// when you close a file the fclose return 0.

}
