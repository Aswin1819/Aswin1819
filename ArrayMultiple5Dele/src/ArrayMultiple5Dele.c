/*
 ============================================================================
 Name        : ArrayMultiple5Dele.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[30],n;
	printf("Enter the limit :");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%5==0){
			for(j=i;j<n;j++){
				a[j+1]=a[j+3];
			}
			if(i==n-1){
				n=n-1;

			}else if(i==n-2){
				n=n-2;
			}else{
				n=n-3;
			}
		}

	}
	for(i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
