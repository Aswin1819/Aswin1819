/*
 ============================================================================
 Name        : OEAofArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],n,i,sum,avg;
	sum=0;
	printf("Enter the limit of array :");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("odd numbers are :");
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}

	}
	printf("\nEven numbers are :");
		for(i=0;i<n;i++){
			if(a[i]%2==0){
				printf("%d ",a[i]);
			}

		}
		printf("\n Average is:");
		for(i=0;i<n;i++){
			sum=sum+a[i];

		}
		avg=sum/n;
		printf("%d ",avg);

	return EXIT_SUCCESS;
}
