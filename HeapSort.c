#include <stdio.h>
#include <stdlib.h>

void HeapAdjust(int sourceArr[],int adjust,int len){							
	int son															
	,	temp;
	
	temp = sourceArr[adjust];
	son = 2 * adjust + 1;                                           		
	while(son < len){													
		if(son+1<len && sourceArr[son+1]>sourceArr[son])								
			son++;													
		if(sourceArr[son] > temp){										
			sourceArr[adjust] = sourceArr[son];
			adjust = son;
			son = 2 * adjust + 1;											
		}else{
			break;													
		}
		sourceArr[adjust] = temp;												
	}

}

void BuildHeap(int sourceArr[],int len){	
		int adjust;							
	for (adjust = len / 2 - 1; adjust >= 0; adjust--)							
		HeapAdjust(sourceArr, adjust, len);
}

void HeapSort(int sourceArr[],int len){									
	BuildHeap(sourceArr,len);
	int adjust;
	for(adjust= len - 1;adjust > 0;adjust--){										
			int temp = sourceArr[adjust];
			sourceArr[adjust] = sourceArr[0];
			sourceArr[0] = temp;
			HeapAdjust(sourceArr, 0, adjust);									
	}
}
