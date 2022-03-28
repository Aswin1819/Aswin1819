/*
 ============================================================================
 Name        : ArrayMulti3Delet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[40],n;
	printf("Enter the limt: ");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%3==0){
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
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
