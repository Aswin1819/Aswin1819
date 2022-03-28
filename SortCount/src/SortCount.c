/*
 ============================================================================
 Name        : SortCount.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[20],n,temp,c,flag;
	printf("Enter the limit :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}


	for(i=0;i<n-1;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}


	}

	for(i=0;i<n;i++){
	     flag=0;

		for(j=0;j<n;j++){
			if(a[i]==a[j]&&i!=j){
				flag=1;
			}

		}
		if(flag==0){
			c++;
		}
	}

	printf("%d",c);

	return EXIT_SUCCESS;
}
