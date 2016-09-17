#include <stdio.h>
#include <stdlib.h>

void QuickSort(int sourceArr[],int left,int right){						//left 和 right 用于记录返回的基准(每次左右两个分组的上下界)

	if(left < right){
		int leftSide = left;
		int rightSide = right;
		int base = sourceArr[leftSide];
		
		while(leftSide < rightSide){
			while(leftSide < rightSide && sourceArr[rightSide] >= base)
				rightSide--;
			if(leftSide < rightSide){
				sourceArr[leftSide] = sourceArr[rightSide];
				leftSide++;
			}
			
			while(leftSide < rightSide && sourceArr[leftSide] < base)
				leftSide++;
			if(leftSide < rightSide){
				sourceArr[rightSide] = sourceArr[leftSide];
				rightSide--;
			}		
		}
		
		sourceArr[leftSide] = base;
		QuickSort(sourceArr,left,leftSide - 1);
		QuickSort(sourceArr,leftSide + 1,right);
	}
	
}

void QuickSortPack(int sourceArr[],int len){
	QuickSort(sourceArr,0,len - 1);
}