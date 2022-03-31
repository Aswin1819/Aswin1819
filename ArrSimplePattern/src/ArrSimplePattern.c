/*
 ============================================================================
 Name        : ArrSimplePattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
	int t=6,c,n,a[90],count=1,p=0;
	printf("Enter the limit: ");
		scanf("%d",&n);
		printf("Entered  elements are:\n\n ");
		for(i=0;i<n;i++){
			a[i]=count;
			count=count+1;
		}
		for(i=0;i<n;i++){
			if(a[i]%5==0){
				for(j=i;j<n;j++){
					a[j]=a[j+1];
				}
	            i--;
				n--;
			}

		}
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}

		printf("\n\n\n\n\n");


 //pattern printing
	for(i=1;i<=4;i++){
		c=2;

		for(k=1;k<=2;k++){
			for(j=1;j<=t;j++){
				if(j>c){
				printf("%d",a[p]);
				p++;
				}else{
					printf("_ ");
				}


			}
			c--;
		     t--;
			printf("\n");
		}
		t++;



		for(j=1;j<=i;j++){
			printf("%d\n",a[p]);
			p++;

		}




	}


	return EXIT_SUCCESS;
}
