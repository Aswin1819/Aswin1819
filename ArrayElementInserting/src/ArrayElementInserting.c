/*
 ============================================================================
 Name        : ArrayElementInserting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100],n,i,position,value;
	printf("Enter the limit of array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the postion you wish you to insert elements :\n");
	scanf("%d",&position);
	printf("Enter the element you like to Insert :\n");
	scanf("%d",&value);
	for(i=n;i>=position-1;i--){
		arr[i+1]=arr[i];
		arr[position-1]=value;
	}
	printf("Resultant array is :\n");
	for(i=0;i<=n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
