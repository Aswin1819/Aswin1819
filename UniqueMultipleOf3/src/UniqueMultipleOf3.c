/*
 ============================================================================
 Name        : UniqueMultipleOf3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,sum=0,a[20];
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int flag =0;
			if(a[i]==a[j]&&i!=j){
				if(a[i]%3==0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				sum=sum+a[i];
			}
		}
	}
	printf("%d ",sum);

	return EXIT_SUCCESS;
}
