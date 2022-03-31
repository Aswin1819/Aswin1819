/*
 ============================================================================
 Name        : MergeTwoArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50],b[50],n,i,l,j,k,p;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of second of array:  ");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}

	for(i=0;i<n;i++){
		a[n+i]=b[i];
	}
	l=n+n;
	printf("Array after merging: \n\n");
	for(i=0;i<l;i++){
		printf("%d ",a[i]);
	}

	for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			if(a[i]==a[j]){
				for(k=j;k<l;k++){
					a[k]=a[k+1];
				}
				l--;

			}
		}
		printf("\n%d ",a[i]);


	}
	printf("\n\n\n\n");
	for(i=1;i<=3;i++){
		for(j=1;j<=i*3;j++){
			printf("%d ",a[p]);
			p++;
		}
		printf("\n");
		if(i<3){
			for(k=1;k<=i*3;k++){
				printf("%d\n",a[p]);
				p++;
			}
		}
	}



	return EXIT_SUCCESS;
}
