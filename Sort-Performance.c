#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include "SortFile.h"

void main(){
	int len = 0
	,	flag = 0
	,	frequency;
	len = HowmanyNumber();
	int *sourceArr;
	sourceArr = (int*)malloc(sizeof(int)*len);      //分配空间
	

	FILE *fp;
	
	if((fp=fopen("Source.txt","w")) == NULL){  //打开文件
		printf("File cannot be opened!\n");
		exit(1);
	}
		
	printf("Please enter the frequency: ");	//设置循环次数
	scanf("%d",&frequency);
		
	for(flag;flag<frequency;flag++){		//进行循环
	
	gentrateNumbers(sourceArr,len);			//产生随机数
		
	perfomace(sourceArr,len,fp);			//算法测试主体
	
	fprintf(fp,"\r\n");
	}
	
	if(fclose(fp) != 0){					//关闭文件
		printf("File cannot close! \n");
		exit(0);
	}
}