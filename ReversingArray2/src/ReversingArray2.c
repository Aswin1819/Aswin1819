/*
 ============================================================================
 Name        : ReversingArray2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[30],n,i,j,temp;
	printf("Enter the limit of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
    }
    printf("Array after Reversing: ");
    for(i=0,j=n-1;i<n/2;i++,j--){
    	temp = arr[i];
    	arr[i]=arr[j];
    	arr[j]=temp;
    }
    for(i=0;i<n;i++){
    	printf("\na[%d]=%d",i,arr[i]);
    }
	return EXIT_SUCCESS;
}
