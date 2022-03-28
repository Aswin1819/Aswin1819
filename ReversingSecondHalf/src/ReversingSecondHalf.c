/*
 ============================================================================
 Name        : ReversingSecondHalf.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[50],i,j,n,temp;
		printf("Enter the limit:");
		scanf("%d",&n);
		printf("Enter the elements:");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);

		}
		printf("Array is " );
		for(i=n/2,j=n-1;i<j;i++,j--){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		for(i=0;i<n;i++){
			printf("\na[%d]=%d",i,arr[i]);
		}
	return EXIT_SUCCESS;
}
