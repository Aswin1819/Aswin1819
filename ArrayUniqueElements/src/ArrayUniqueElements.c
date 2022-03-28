/*
 ============================================================================
 Name        : ArrayUniqueElements.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n,c,a[30];
	printf("Enter the limit of array :");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		c=0;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				c++;
			}
		}
		for(k=i+1;k<n;k++){
			if(a[i]==a[k]){
				c++;
			}
		}
		if(c==0){
			printf("%d\n",a[i]);
		}
	}
	return EXIT_SUCCESS;
}
