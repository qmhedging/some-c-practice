// the mud problem 3
# include <stdio.h>

#include <string.h>

#define maxname 20

char *s_gets(char *st,int n);

struct kids{int mud[3];char name[maxname];};// define the kids type ,with mud dimensions and a name

main()

{
    int peoplenum,i;

    printf("Please enter the number of a class\n");

    scanf("%d",&peoplenum);

    while (peoplenum != -1)



    {
        //char arr[peoplenum];

        for (i=1;i<peoplenum;i++)

           {

            int inputarr[3];

            char nameinput;

            struct kids studentname;



            printf("the length of mud\n");
            scanf("%d",&studentname.mud[1]);//done


            printf("the width of mud\n");
            scanf("%d",&studentname.mud[2]);//done

            printf("the height of mud\n");
            scanf("%d",&studentname.mud[3]);//done

            printf("%d\n",studentname.mud[1]*studentname.mud[2]*studentname.mud[3]);

            printf("the name of student\n");
            scanf("%s",studentname.name);



           // arr[i] = nameinput;





            //studentname.mud[0] = inputarr[0];
            //studentname.mud[1] = inputarr[1];
            //studentname.mud[2] = inputarr[2];



            //printf("%s",studentname.name);





           }
      printf("next peoplenum\n");

      scanf("%d",&peoplenum);

    }

    return 0;
}
