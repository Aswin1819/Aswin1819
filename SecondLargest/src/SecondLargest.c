/*
 ============================================================================
 Name        : SecondLargest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#undef INT_MIN


int main(void) {
	int a[20],i,l1,l2,n;
	printf("Enter the limit :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int INT_MIN;
	l1=INT_MIN;
	l2=INT_MIN;

	for(i=0;i<n;i++){
		if(a[i]>l1){
			l2=l1;
			l1=a[i];
		}else if(a[i]>l2&&a[i]<l1){
			l2=l1;

		}
	}
	printf("Second largest element is %d ",l2);

	return EXIT_SUCCESS;
}
