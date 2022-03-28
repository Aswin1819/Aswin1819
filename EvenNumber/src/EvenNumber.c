/*
 ============================================================================
 Name        : EvenNumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,a[10],count=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the values of array: ");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);

	}
	printf("Number of even numbers in the given array is ");
	for(i=1;i<=n;i++){
		if(a[i]%2==0){
			count++;

		}

	}
	printf("%d",count);
	return EXIT_SUCCESS;
}
