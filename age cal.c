//the age calculation
#include <stdio.h>
main()

{
long year1,year2,month1,month2,day1,day2,daysum1,daysum2,yearold,monthold,dayold;


printf("please input your birthday year , month , day ");

scanf("%ld %ld %ld",&year1,&month1,&day1);

printf("please input today year , month , day ");

scanf("%ld %ld %ld",&year2,&month2,&day2);

daysum1= 365*year1+30*month1+day1;

//printf("%d, %d",daysum1,daysum2);

daysum2=365*year2+30*month2+day2;

yearold = (int)(daysum2-daysum1)/365;

monthold = (int)((daysum2- daysum1-365*yearold)/30);

dayold = daysum2-daysum1-365*yearold-30*monthold;

printf("so you are %d year %d month %d day old.",yearold,monthold,dayold);

return 0;




}
