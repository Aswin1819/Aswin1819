/*
 ============================================================================
 Name        : ArrayPrimeEven.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,a[50],flag;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    	 flag=0;

    	for(j=2;j<a[i];j++){
    		if(a[i]%j==0){
    			flag=1;
    			break;

    		}
    	}
    	if(a[i]==0||a[i]==1){
    		flag=1;
    	}



    if(flag==0){
    	printf("* ");


    }else{
    	if(a[i]%2!=0){
    		printf("%d ",a[i]);

    	}

    }
    }





	return EXIT_SUCCESS;
}
