#include <stdio.h>
#include <stdlib.h>

void InsertSort(int sourceArr[],int len){
	int ordely
	,	disordely
	,	Index;
	
	for(disordely = 1;disordely < len;disordely++){
		for(ordely = disordely - 1;ordely >= 0;ordely--)
			if(sourceArr[ordely] < sourceArr[disordely])
				break;
			
		if(ordely != disordely){
			int temp = sourceArr[disordely];
			for(Index = disordely - 1;Index > ordely;Index--)
				sourceArr[Index + 1] = sourceArr[Index];
			sourceArr[Index + 1] = temp;
		}
	}
}
