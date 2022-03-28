/*
 ============================================================================
 Name        : SearchKey.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,a[10],j,flag=0;
	printf("Enter the limit of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered elements are:  ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter search key: ");
	scanf("%d",&j);
	for(i=0;i<n;i++){
		if(j==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("search key found at position: %d ",i+1);
	}else{
		printf("Not Found!!");
	}
	return EXIT_SUCCESS;
}
