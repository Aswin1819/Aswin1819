/*
 ============================================================================
 Name        : SumOfOddNo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,sum=0;
	printf("Enter a Limit: ");
	scanf("%d",&limit);
	printf("Odd numbers are :");
	for(i=0;i<limit;i++){
		if(i%2==1){
			printf("%d ",i);
			sum=sum+i;

		}

	}
	printf("\nSum of numbers = %d",sum);
	return EXIT_SUCCESS;
}