#include <stdio.h>
#include <stdlib.h>

void Merge(int sourceArr[],int tempArr[],int lowIndex,int midIndex,int hightIndex){
	int firstArrIndex = lowIndex
	,	secondAarrIndex = midIndex + 1
	,	tempIndex = 0;
	
	while(firstArrIndex <= midIndex && secondAarrIndex <= hightIndex){
		if(sourceArr[firstArrIndex] <= sourceArr[secondAarrIndex])
			tempArr[tempIndex++] = sourceArr[firstArrIndex++];
		else 
			tempArr[tempIndex++] = sourceArr[secondAarrIndex++];
	}
	
	while(firstArrIndex <= midIndex)
		tempArr[tempIndex++] = sourceArr[firstArrIndex++];
	
	while(secondAarrIndex <= hightIndex)
		tempArr[tempIndex++] = sourceArr[secondAarrIndex++];
	
	int flagIndex = 0;
	
	for(flagIndex;flagIndex < tempIndex;flagIndex++){
		sourceArr[lowIndex + flagIndex] = tempArr[flagIndex];
	}
}

void MergeSort(int sourceArr[],int lowIndex,int hightIndex)
{
	int* tempArr;
	int len = hightIndex - lowIndex + 1;
	tempArr = (int*)malloc(sizeof(int) * len);
    int midIndex;
    if(lowIndex < hightIndex)
    {
        midIndex=(lowIndex + hightIndex) / 2;
        MergeSort(sourceArr, lowIndex, midIndex);
        MergeSort(sourceArr, midIndex + 1, hightIndex);
        Merge(sourceArr, tempArr, lowIndex, midIndex, hightIndex);
    }
}

void MergeSortPack(int sourceArr[],int len){
	
	MergeSort(sourceArr,0,len - 1);
}