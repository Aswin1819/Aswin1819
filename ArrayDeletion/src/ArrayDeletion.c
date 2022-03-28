/*
 ============================================================================
 Name        : ArrayDeletion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,pos,a[20];
	printf("Enter the limit :");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the postion you wish to delete: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
