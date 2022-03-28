/*
 ============================================================================
 Name        : MyGame.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Result,answer;
	int opt1;
	printf("Assume a number between 0 and 10\n");

	printf("Press 5 to continue ");
	scanf("%d",&opt1);
	if(opt1==5){
		printf(" Add 30 to that number \n");
		printf ("Again add 6 to the latest number you got \n");
			printf("enter the sum you last get\n");
			scanf("%d",&Result);
			answer=Result-36;
			printf("Assumed number is %d",answer);
	}else{
		printf("Assume a number between 0 and 10\n");
		printf("press 5 to continue ");
			scanf("%d",&opt1);
			if(opt1==5){
				printf(" Add 30 to that number \n");
				printf ("Again add 6 to the latest number you got \n");
					printf("enter the sum you last get\n");
					scanf("%d",&Result);
					answer=Result-36;
					printf("Assumed number is %d",answer);
			}
	}




	return EXIT_SUCCESS;

}




