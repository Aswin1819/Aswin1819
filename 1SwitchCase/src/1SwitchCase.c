/*
 ============================================================================
 Name        : 1SwitchCase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("1 for Sunday\n2 for Monday\n3 for Tuesday\n4 for Wednesday\n5 for Thursday\n6 for Friday\n7 for Saturday");

	printf("\nEnter a number: ");
	scanf("%d",&num);

	switch(num){
	case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid input");
			break;

	}


	return EXIT_SUCCESS;
}