# include <stdio.h>

typedef struct kids{int mud[3];char name;};

main()


{
    int peoplenum,i;

    scanf("%d",&peoplenum);

    while (peoplenum != -1)



    {
        int arr[peoplenum];

       for (i=1;i<peoplenum;i++)

       {
           char inputname;
           int j;
           scanf("%s",&inputname);
           struct kids inputname;// ini the kid type
           inputname.name = inputname;
           for (j=1;j<3;j++){scanf("%d",&inputname.mud[j]);}
           arr[i]=inputname;

       }

      for (j=1;j<3;j++){printf("%d",&arr[i].mud[j]);}

      printf("%s",&arr[i].name);


    }




}
