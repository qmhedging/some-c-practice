# include <stdio.h>

#include <string.h>

#define maxname 20



typedef struct {int classnum;int classpopulation;int mud[3];char name[maxname];int mudvolume} KIDS;// define the kids type ,with mud dimensions and a name

void tellpair(KIDS,int,int);//pick up a pair from a certain class

main()

{


    int numberofclass,classpopulation,i,j;



    printf("Please enter the number of total classes:\n");

    scanf("%d",&numberofclass);


    for (i=0;i<numberofclass;i++)

    {

    printf("Please input number of students for  the class %d:\n",i+1);

    scanf("%d",&classpopulation);



    while (classpopulation != -1)



    {
        KIDS a[numberofclass][classpopulation];// define a array of type KIDS

        //char arr[numberofclass];

        for (j=0;j<classpopulation;j++)

           {

            //input the kids data



            printf("the name of student\n");

            scanf("%s",&a[i][j].name);

            printf("so the student name is %s\n",a[i][j].name);



            printf("the length of mud\n");
            scanf("%d",&a[i][j].mud[1]);//done


            printf("the width of mud\n");
            scanf("%d",&a[i][j].mud[2]);//done

            printf("the height of mud\n");
            scanf("%d",&a[i][j].mud[3]);//done

            a[i][j].mudvolume = a[i][j].mud[1]*a[i][j].mud[2]*a[i][j].mud[3];


            a[i][j].classpopulation = j;

            a[i][j].classnum = i;






           }

      tellpair(a,i,classpopulation);// tellpair function only need two inputs:the class num and class population
      printf("next class,how many students in the class? \n");

      scanf("%d",&classpopulation);

    }

    }

    return 0;
}

void tellpair(a,n,m)


{
    int n1,n2;

    for (n1=0;n1<m;n1++)
    {
        for (n2=n1;n2<m;n2++)

        {
            if (a[n][n1].mudvolume+a[n][n2].mudvolume==500) && (a[n][n1].mudvolume > a[n][n2].mudvolume)

            {
                printf("%s took clay from %s.",a[n][n1].name,a[n][n2]);

                break;

            }



            else if (a[n][n1].mudvolume+a[n][n2].mudvolume==500) && (a[n][n1].mudvolume < a[n][n2].mudvolume)

            {
                printf("%s took clay from %s.",a[n][n1].name,a[n][n2]);

                break;
            }
        }
    }


}

