/*
 ============================================================================
 Name        : AdjaMultiArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,arr[40],n,brr[10],c,k=0;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		c=arr[i]*arr[i+1];
		brr[k]=c;
		k++;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",brr[i]);

	}

	return EXIT_SUCCESS;
}
