#include <stdio.h>

#include<string.h>

typedef struct student
{
int cube;

char name[12];

} student; // define the struct student

typedef struct class_
{
int count;

student students[10];
}class_; // define functions

class_ gClass;//ini gGlass of struct class_

int get_a_case();

void output_generation();

void output();

int main()

{
while (get_a_case())

      output_generation();
      return 0;
}

/////the describe of functions
int get_a_case()

{
int i,length,width,height;

if (scanf("%d",&gClass.count)==1 && gClass.count!=-1)//if the num of people in one class is legitimate(input a number and it's not -1)

	{
	for (i=0; i<gClass.count;++i)

	{
	scanf("%d%d%d%s",&length,&width,&height,gClass.students[i].name);//input the mud and name for each student 

	gClass.students[i].cube = length*width*height;//calculate the volumn of the cube
	}

	return 1;
	}

return 0;

}

void output_generation()

{

int min_i =0, max_i =1, i,result_num,class_num;

char result[class_num][100];

result_num=0;

class_num=0;

if (gClass.students[0].cube > gClass.students[1].cube)

	{
	min_i=1,max_i=0;
	}
    for (i=2;i<gClass.count;++i)
		{
	     if(gClass.students[i].cube<gClass.students[min_i].cube)

			 min_i =i;

		 else if (gClass.students[i].cube>gClass.students[max_i].cube) // pick the taker and takee

			 max_i=i;
		}

	result_num++;

	class_num++;

	strcpy (result[class_num][100],gClass.students[max_i].name);

	strcat(result[class_num][100],"took clay from");

	strcat(result[class_num][100],gClass.students[min_i].name);



	//printf("%s took clay from %s\n",gClass.students[max_i].name,gClass.students[min_i].name);
}


void output()

	{

	    int i;

       for (i=0;i<class_num;i++)

		{
		
	    puts(result[class_num][100]);
	   
	   }



	}