#include "stdio.h"
#include"stdlib.h"

int initrade =200; // initial trade 初始委托量

int sumsold = 0; //已成交量

long targettosell=30000; //目标交易总量

int i=0; //计数

int deltatrade=10; //委托数量变量

int sellnext =0; //下笔委托量

int pertrade[200]; //每笔委托量

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

