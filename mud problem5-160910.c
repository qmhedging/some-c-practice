#include<stdio.h>
#include<string.h>
 
typedef struct student{
    int cube;
    char name[12];
	}student;
 
typedef struct class_{
    int count;
char name_max[12];   //修改
char name_min[12];  //修改
    student students[10];
}class_;

typedef struct answer{      //修改
class_  class_s[10];
}answer;

answer gAnswer; 
class_ gClass;
int n=0;
 
int get_a_case();
void output();

int main(){
    while(get_a_case()){
        output();
n++;
}
for(int i=0; i<n; i++)

{
printf("%s took clay from %s\n", gAnswer.class_s[i].name_max, gAnswer.class_s[i].name_min);     //添加
}
    return 0;
}
 
/* return 1 in case a class info has been successfully read;
 *        0 otherwise
 *
 */
int get_a_case()
{
    int i,length,width,height;
scanf("%d",&gClass.count);
    if((gClass.count>1&&gClass.count<10 )&& gClass.count!=-1)
    {
        for(i=0; i<gClass.count;i++)
        {
            scanf("%d%d%d%s",&length,&width,&height,gClass.students[i].name);
            gClass.students[i].cube=length*width*height;
        }
        return 1;
    }
    return 0;
}
 
/* find the min and max, and output it
 */
void output()
{
    int min_i=0, max_i=1, i;
    if(gClass.students[0].cube>gClass.students[1].cube)
    {
        min_i=1, max_i=0;
    }
    for(i=2; i<gClass.count; i++)
    {
        if(gClass.students[i].cube<gClass.students[min_i].cube)
            min_i=i;
        else if(gClass.students[i].cube>gClass.students[max_i].cube)
            max_i=i;
    }
strcpy(gAnswer.class_s[n].name_max,gClass.students[max_i].name);
strcpy(gAnswer.class_s[n].name_min,gClass.students[min_i].name);
}