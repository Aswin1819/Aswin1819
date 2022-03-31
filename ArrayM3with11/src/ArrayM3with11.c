/*
 ============================================================================
 Name        : ArrayM3with11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,a[30];
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elemets: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		if(a[i]%3==0){
			a[i]=11;
		}
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
