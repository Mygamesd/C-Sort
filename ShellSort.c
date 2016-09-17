#include <stdio.h>
#include <stdlib.h>

void ShellSort(int sourceArr[],int len){									
	int element
	  , step;															
	
	step = len / 2;
	for(;step > 0;step /= 2){														
		
		int group;		
		for(group = 0;group < step;group++){												
			for(element = group + step;element < len;element += step){										
				if(sourceArr[element] < sourceArr[element-step]){										
					int temp
					  , Index;
					  temp = sourceArr[element];
					  Index = element - step;
					  while(Index >=0 && sourceArr[Index] > temp){						
					  		sourceArr[Index + step] = sourceArr[Index];
					  		Index -= step;
					  }
					  sourceArr[Index + step] = temp;
				}
			}
		}
	}
}
