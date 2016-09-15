#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX_LINE 1024

int main(){
FILE * welcome=NULL,* outfile=NULL;

char array[376];

welcome= fopen("F:\work\pobo\trading NG\tradesimsoybeanmeal160908.txt","r");
outfile=fopen("F:\work\pobo\trading NG\timetrade.txt","w");

fgets(array,376,welcome);

{
unsigned int i;
for(i=0;i<strlen(array);i++){
if(array[i]=='$'){
switch (array[++i]){
case '0':fputs("Mike",outfile);break;
case '1':fputs("We",outfile);
}
}
else fputc(array[i],outfile);
}
}

fclose(outfile);
fclose(welcome);

_getch();

return 0;
}
