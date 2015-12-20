// output test with decimal , octal and hex

#include <stdio.h>

int main(void)

{

int i=100;

int j= 2147483647;

unsigned int k =4294967295;

unsigned int big =3000000000;

char lettera,letterb,nerf,charcode;


printf("decimal %d\n octal %o\n hex %x\n",i,i,i);

printf("decimal %#d\n octal %#o\n hex %#x\n",i,i,i);// output with C prefix


printf("%d\n %d\n %d\n",j,j+1,j+2);

printf("%d\n %d\n %d\n",k,k+1,k+2);

printf("big : %u    %lld\n",big, big);//unsigned can hold larger number than long long int

lettera='A';

letterb=66;// integer to letter

nerf = '/a';//still a

printf("letter a:%c   letter b:%c, nerf %c \n\a\b\f\r\t\t\\\'",lettera,letterb,nerf);

printf("Gramps sez, \"a \\ is a backslash\"\"n");

printf("Hello!\007\n");

printf("please input an character : \n");

scanf("%c",&charcode);

printf("so the charcode for %c is %d\n",charcode,charcode);

return 0;


}