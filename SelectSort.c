#include <stdio.h>
#include <stdlib.h>

void SelectSort(int sourceArr[],int len){
	int ordely
	,	disordely
	,	minIndex;
	
	  for(ordely = 0;ordely < len;ordely++){
		  minIndex = ordely;
		  for(disordely = ordely + 1;disordely < len;disordely++)
			  if(sourceArr[disordely] < sourceArr[minIndex]){											
				  minIndex = disordely;													  
				}
				  int temp = sourceArr[ordely];										
				  sourceArr[ordely] = sourceArr[minIndex];
				  sourceArr[minIndex] = temp;
		}
}