#include "stdio.h"
#include"stdlib.h"

int initrade =200; // initial trade ��ʼί����

int sumsold = 0; //�ѳɽ���

long targettosell=30000; //Ŀ�꽻������

int i=0; //����

int deltatrade=10; //ί����������

int sellnext =0; //�±�ί����

int pertrade[200]; //ÿ��ί����

int main() {

printf("target: %d",targettosell);

printf("initrade: %d",initrade);

while (sumsold <targettosell -sellnext)

	{
     pertrade[i] = initrade + deltatrade*i;

	 sellnext = initrade + deltatrade*(i+1);

	 sumsold =sumsold + pertrade[i];
	 
	 printf("Trade %d th = %d\n",i,pertrade[i]);

	 i++;
	}

printf("Trade %d th = %d\n",i+1,targettosell - sumsold);

system("pause");


}

