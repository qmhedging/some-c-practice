//file test


#include<stdio.h>
#include<stdlib.h>

main()

{

char ch,filename="testfile.txt";


FILE * fp;

printf("%s",filename);


fp=fopen(filename,"r");

if ((fp=fopen(filename,"r"))==NULL)

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




printf("%d\n",fclose(fp));// when you close a file the fclose return 0.

}


