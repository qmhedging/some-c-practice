//plain output

#include<stdio.h>

#include<stdlib.h>

main()

{
    FILE * fpin;

    char ch;

    if((fpin=fopen("testfile.txt","r"))==NULL)

    {
        printf("can't open the file !\n");

        exit(0);
    }

    ch=fgetc(fpin);

    while(ch!=EOF)

        {
            putchar(ch);

            ch=fgetc(fpin);
        }
    fclose(fpin);
}
