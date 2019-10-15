#include <stdio.h>

int main()
{
	int restart = 1;
	
	while(restart == 1)
	{
		int guess = 0;
		int guess_total = 1;
		int num;
		int high_guess = 10;
		int low_guess = 1;
		
		printf("This is a guess my number game. You will have 3 guesses.\n");
		printf("Please enter a number for your friend to guess.\n");
		scanf("%d", &num);
		printf("Please enter a number from 1 to 10:");
		
		while(num != guess)
		{
			
			scanf("%d", &guess);
			
			if(guess_total == 4)
			{
				printf("You ran out of guesses!!! The number to guess was %d.\n", num);
				printf("Want to play again? Y:1/N:0?\n");
				scanf("%d", &restart);
				if(restart == 0);
				{
					return 0;
				}
			}
			else if (guess < num)
			{
				low_guess = guess;
				printf("%d is too low.\n", guess);
				printf("You have guessed %d time('s) you have %d left/n", guess_total, (3 - guess_total));
				printf("Guess from %d to %d\n", low_guess, high_guess);
				guess_total ++;
			}
			else if (guess > num)
			{
				high_guess = guess;
				printf("%d is too high\n", guess);
				printf("You have guessed %d time('s) you have %d left\n", guess_total, (3 - guess_total));
				printf("Guess from %d to %d\n", low_guess, high_guess);
				guess_total ++;
			}
			else if(num == guess)
			{
				printf("Congrats you won! Want to play again? Y:1/N:0?\n");
				scanf("%d", &restart);
				if(restart == 0);
				{
					return 0;
				}
				
			}
		}
		
	}
	return 0;
}
