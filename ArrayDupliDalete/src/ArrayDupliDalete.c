/*
 ============================================================================
 Name        : ArrayDupliDalete.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n,a[30];
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elemants:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(k=j;k<n;k++){
					a[k]=a[k+1];
				}

				n--;
			}

		}
		printf("%d ",a[i]);

	}

	return EXIT_SUCCESS;
}
