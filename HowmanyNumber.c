#include <stdio.h>
#include <stdlib.h>

int HowmanyNumber(){
	int len;
	printf("Please enter how many number of sourceArray:");
	scanf("%d",&len);
	
	while((int)len != len){
		printf("Your enter is wrong!Please check your enter is vaild!");
		scanf("%d",&len);
	}
	
	while(len == 0){
		printf("The sourceArray is emty!Please enter again:");
		scanf("%d",&len);
	}
	while(len<0){
		printf("Your enter is wrong!Please check number is vaild!");
		scanf("%d",&len);
	}
	return len;
}