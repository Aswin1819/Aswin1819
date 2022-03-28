/*
 ============================================================================
 Name        : ArrayDeletionAOM%.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,a[100],n,j;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%5==0){
			for(j=i;j<n;j++){
				a[j+1]=a[j+3];


			}


		}
	}
	for(i=0;i<n-2;i++){
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}
