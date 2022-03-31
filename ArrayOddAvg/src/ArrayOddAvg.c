/*
 ============================================================================
 Name        : ArrayOddAvg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,a[40],sum=0,cnt=0;
	double avg;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the element:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			sum=sum+a[i];
			cnt++;
		}




	}
	avg=sum/cnt;
    printf("%f",avg);



	return EXIT_SUCCESS;
}
