#include <stdio.h>
#include <string.h>

#define maxname 20

char *s_gets(char *st,int n);


struct names{char name1[maxname];char name2[maxname];};

int main(void)

{


struct names namelist;
printf("please input name1 \n");
s_gets(namelist.name1,maxname);
printf("please input name2 \n");
s_gets(namelist.name2,maxname);

printf("%s      %s",namelist.name1,namelist.name2);


return 0;


}

char *s_gets(char * st, int n) {

                                 char *ret_val;
                                 char *find;

                                 ret_val = fgets(st,n,stdin);

                                 if (ret_val)

                                                {
                                                  find = strchr(st,'\n');
                                                  if (find)      *find = '\0';

                                                  else while(getchar()!= '\n') continue;
                                                }

                                                return ret_val;
                                 }





