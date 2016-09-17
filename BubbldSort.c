#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void BubbldSort(int sourceArr[],int len){
	int Index;
	int flag;
	flag = true;
	while(flag){
		flag = false;
		for(Index = 1;Index < len;Index++){
			if(sourceArr[Index - 1] > sourceArr[Index]){
				int temp = sourceArr[Index];
				sourceArr[Index] = sourceArr[Index - 1];
				sourceArr[Index - 1] = temp;
				flag = true;
			}
		}
		len--;
	}
}
