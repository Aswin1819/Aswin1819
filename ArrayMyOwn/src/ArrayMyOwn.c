/*
 ============================================================================
 Name        : ArrayMyOwn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,c,n,a[i];
	printf("Enter the limit of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		c=1;
		for(j=i+1;j<n;j++){
			if(a[i]==0){
				continue;
			}else if(a[i]==a[j]){
				c++;
				a[j]=0;
			}

		}
		if(c>1){
			printf("%d ",c);
		}
	}
	return EXIT_SUCCESS;
}
