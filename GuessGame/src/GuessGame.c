/*
 ============================================================================
 Name        : GuessGame.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int secretNumber= 5;
	int guess;
	int guessCount= 0;
	int guessLimit= 5;
	int outOfGuess= 0;
	while(guess!=secretNumber && outOfGuess==0){
		if(guessCount<guessLimit){
			printf("Enter a Number");
			scanf("%d",&guess);
			guessCount++;
		}else{
		     outOfGuess =1;
		}


	}
	    if(outOfGuess==1){
		printf("out Of Guess");
	}    else{
		printf("You Win!!!");

	}


	}
