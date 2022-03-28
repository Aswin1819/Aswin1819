/*
 ============================================================================
 Name        : PrimeWith1and2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,flag=0,n,a[20];
	printf("Enter the limti :");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		flag=0;
		if(a[i]==0||a[i]==1){
			flag=1;

		}else{
		for(j=2;j<a[i];j++){
			if(a[i]%2==0){
				flag=1;
				break;
		}

			}
			if(flag==0){
				a[i]=1;
			}else{
				a[i]=0;
			}



		}

	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}








	return EXIT_SUCCESS;
}
