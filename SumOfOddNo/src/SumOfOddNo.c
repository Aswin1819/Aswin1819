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
	for(i=0;i<limit;i++){
		if(i%2==1){
			sum=sum+i;

		}

	}
	printf("\nSum of odd numbers = %d",sum);
	return EXIT_SUCCESS;
}
