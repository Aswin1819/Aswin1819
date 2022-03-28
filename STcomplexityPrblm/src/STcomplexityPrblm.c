/*
 ============================================================================
 Name        : STcomplexityPrblm.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,a[10],i,j,target;
	printf("Enter the limit of array :");
	scanf("%d",&limit);
	printf("Enter the elements of array :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the sum of target :");
	scanf("%d",&target);
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(a[i]+a[j]!=target){

			}else{
				printf("Numbers are %d %d",a[i],a[j]);
			}

		}


	}

	return EXIT_SUCCESS;
}
