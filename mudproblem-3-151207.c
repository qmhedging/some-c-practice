# include <stdio.h>

#include <string.h>

#define maxname 20



typedef struct {int classnum;int classpopulation;int mud[3];char name[maxname];} KIDS;// define the kids type ,with mud dimensions and a name

main()

{
    KIDS a[][];

    int numberofclass,i,j;



    printf("Please enter the number of total classes:\n");

    scanf("%d",&numberofclass);

    for (i=0;i<numberofclass,i++)

    {



    a[i].classnum = i+1;

    printf("Please input number of students in the class:\n");

    scanf("%d",&a[i].classpopulation);

    while (a[i].classpopulation != -1)



    {
        //char arr[numberofclass];

        for (j=0;j<a[i].classpopulation;j++)

           {





            printf("the name of student\n");

            scanf("%s",a[j].name);

            printf("so the student name is %s\n",studentname.name);



            printf("the length of mud\n");
            scanf("%d",&studentname.mud[1]);//done


            printf("the width of mud\n");
            scanf("%d",&studentname.mud[2]);//done

            printf("the height of mud\n");
            scanf("%d",&studentname.mud[3]);//done

            printf("%d\n",studentname.mud[1]*studentname.mud[2]*studentname.mud[3]);









           }
      printf("next class,how many students in the class? \n");

      scanf("%d",&studentname.classpopulation);

    }

    }

    return 0;
}



