/*
 ============================================================================
 Name        : ArrayElementDeletion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10],i,position,n;
	printf("Enter the limits of array: ");
	scanf("%d",&n);
	printf("Enter the elments of array : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position where you wish to delete the elemnt:");
	scanf("%d",&position);
	if(position>=n+1){
		printf("Deletion not possible");
	}else{
		for(i=position-1;i<n+1;i++){
			arr[i]=arr[i+1];

		}
		printf("After deletion ");
		for(i=0;i<n-1;i++){
			printf("%d ",arr[i]);
		}
	}
	return EXIT_SUCCESS;
}
