/*
 ============================================================================
 Name        : ArrayDelEven.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,a[74];
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){

		  if(a[i]%2==0){
			a[j]=a[i];
			j++;
	}
		  n--;





	}

	for(i=0;i<n;i++){
		printf("%d ",a[j]);
	}
	return EXIT_SUCCESS;
}
