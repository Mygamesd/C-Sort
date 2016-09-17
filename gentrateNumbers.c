#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

void gentrateNumbers(int Arr[],int len){    //产生随机数函数
	srand(time(NULL));						//srand每秒才能修改一次的，所以快速产生数组有可能导致产生的数据组都是一样的
	int i = 0;
	for(i = 0;i < len;i++)
		Arr[i] = rand()%10000-5000;			//产生-5000-5000的随机数
	printf("\n");
}	
