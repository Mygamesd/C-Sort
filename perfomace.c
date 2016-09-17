#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <malloc.h>

void HeapSort(int sourceArr[],int len);								//函数名调用时需要进行声明
void SelectSort(int sourceArr[],int len);
void BubbldSort(int sourceArr[],int len);
void InsertSort(int sourceArr[],int len);
void ShellSort(int sourceArr[],int len);
void QuickSortPack(int sourceArr[],int len);
void MergeSortPack(int sourceArr[],int len);


int* assignmentArray(int sourceArr[],int len){						//数组赋值
	int* assignemtArr;
	int flag;
	
	assignemtArr = (int*)malloc(sizeof(int)*len);
	for(flag=0;flag<len;flag++){

		assignemtArr[flag] = sourceArr[flag];
	}
	
	return assignemtArr;
}



void perfomace(int sourceArr[],int len,FILE* fp){
	
	void (*funcArr[7])(int arr[],int len) = {QuickSortPack,      //函数指针数组，内容为指向函数的指针
												HeapSort,
												SelectSort,
												BubbldSort,
												InsertSort,
												ShellSort,
												MergeSortPack};
	
	char* sortName[7] = {"QuickSort",
						"HeapSort",
						"SelectSort",
						"BubbldSort",
						"InsertSort",
						"ShellSort",
						"MergeSort"};
	
	double duration;						//计算运行时间
	int* sortArr;
	int arrflag;
	clock_t starttime						//clock()函数变量定义
	,		endtime;
	
	for(arrflag = 0;arrflag<7;arrflag++){
	
		sortArr = assignmentArray(sourceArr,len);
	
		if(len <= 100)
		check(sortArr,len);
		
		starttime = clock();				//记录起始时间
		
		funcArr[arrflag](sortArr,len);		//通过函数指针来调用排序函数
		
		endtime = clock();					//记录结束时间
		
		if(len <= 100)
		check(sortArr,len);
		
		duration = (double)(endtime - starttime)/CLOCKS_PER_SEC;  //计算运行时间，以秒为单位
		printf("%s: %f sec\n",sortName[arrflag],duration);
		
		fprintf(fp,"%f ",duration);								//记录到txt文件中
	
	}

}