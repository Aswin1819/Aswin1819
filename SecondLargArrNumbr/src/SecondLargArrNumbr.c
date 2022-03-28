/*
 ============================================================================
 Name        : SecondLargArrNumbr.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[29],n,i,j,temp;
	printf("enter the limit ;");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){

			temp=a[i];
			a[i]=a[j];
		    a[j]=temp;

	}
		}


	}


	printf("\nSecond largest number is :%d",a[1]);
	return EXIT_SUCCESS;
}
