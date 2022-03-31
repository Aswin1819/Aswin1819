/*
 ============================================================================
 Name        : Merge2ArrDelDupli.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,a[100],b[100],m,k,v=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the limit of second array:");//totaly program is error so i am going to sleep biiie

	scanf("%d",&m);
	printf("Enter the elements of second array: ");
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++){
		a[n+i]=b[i];
		a[v]=a[n+i];
		v++;

	}
	for(i=0;i<m+n;i++){
		printf("%d ",a[i]);
	}
	/*for(j=0;j<m+n-1;j++){
		for(i=i+1;i<m+n;i++){
			if(a[j]==a[i]){
				for(k=i;k<m+n;k++){
					a[k]=a[k+1];
				}
				n--;
			}
		}
		printf("%d ",a[j]);
	}*/

	return EXIT_SUCCESS;
}

