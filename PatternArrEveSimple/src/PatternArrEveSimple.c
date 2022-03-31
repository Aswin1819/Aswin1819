/*
 ============================================================================
 Name        : PatternArrEveSimple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	int count,n=1,a[100],flag,p;
	/*printf("Enter the count: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[i]=count;
		count=count+1;
	}
	for(i=0;i<n;i++){
		flag=1;
		if(a[i]%2==0){
			flag=0;
		}
	}*/
	//if(flag==0){
		for(i=1;i<=4;i++){
			for(j=1;j<=i;j++){
				if(j>=i){
					printf("%d",a[p]);
					p++;

				}else{
					printf("_");
				}
			}
			printf("\n");
			for(j=1;j<=2*i;j++){
				printf("%d",a[p]);
				p++;
			}
			printf("\n");
		}
	//}



	return EXIT_SUCCESS;
}
