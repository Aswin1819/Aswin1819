/*
 ============================================================================
 Name        : SwappingAdjaElements.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[49],i,temp,n;
	printf("Enter an even limit:");
	scanf("%d",&n);
	printf("Enter the limits:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=2){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;

	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
