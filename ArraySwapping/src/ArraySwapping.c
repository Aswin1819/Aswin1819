/*
 ============================================================================
 Name        : ArraySwapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,a[10],b[10],temp,i;
	printf("Enter the limit of array:");
	scanf("%d",&n);
	printf("Enter the values of Array 1 :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the values of Array 2 :");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;

	}
	printf("Array 1: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);

	}
	printf("\nArray 2: ");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);

	}





	return EXIT_SUCCESS;
}
