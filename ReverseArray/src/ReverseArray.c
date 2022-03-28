/*
 ============================================================================
 Name        : ReverseArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elements of array; ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Reverse order is :");
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
