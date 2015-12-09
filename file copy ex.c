//file copy ex

#include<stdio.h>

void filecopy(FILE *,FILE *);

void fileoutput(FILE *);

main()

{
    FILE * fpin, * fpout;

    fpin =fopen("newlist151208.txt","r");//open the source file

    fpout =fopen("targetfile.txt","w");//open the target file

    filecopy(fpin,fpout);

    fileoutput(fpin);

    fileoutput(fpout);

    fclose(fpin);

    fclose(fpout);
}

void filecopy(FILE * fpin,FILE * fpout)

{
    char ch;

    ch = getc(fpin);

    while(!feof(fpin))

    {
        putc(ch,fpout);

        ch=getc(fpin);
    }
}

void fileoutput(FILE * fp)

{
    char ch;

    printf("the content of the target file are :\n");

    fp=fopen("newlist151208.txt","r");

    if ((fp=fopen("newlist151208.txt","r"))==NULL)

    {
        printf("can't open the file");

        exit(0);
    }
   else printf("Read File Ok.\n");


    while (!feof(fp))

    {
        putchar(ch);

        ch= fgetc(fp);


    }


}
