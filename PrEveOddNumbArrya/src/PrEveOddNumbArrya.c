/*
 ============================================================================
 Name        : PrEveOddNumbArrya.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[40],b[40],c[40];
	int i,j=0,k=0,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			b[j]=a[i];
			j++;
		}else{
			c[k]=a[i];
			k++;
		}

	}
	printf("Even numbers are: ");
		for(i=0;i<j;i++){
			printf("%d ",b[i]);
		}
	printf("\nOdd numbers are: ");
		for(i=0;i<k;i++){
			printf("%d ",c[i]);
		}


	return EXIT_SUCCESS;
}
