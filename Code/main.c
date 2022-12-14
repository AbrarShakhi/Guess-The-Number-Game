#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int gen_num, guess, number_of_guesses;
    int runner=1;
    while(runner==1)
    {
	    srand(time(0));
	    gen_num=rand()%100 + 1;
	    printf("Computer has randomly genarated a number from 1 to 100.\nTry to guess that number. (WORNING: DO NOT ENTER ANY CHARECTER NUMBER.) -\n");
	    
	    number_of_guesses=1;
	    do{
	        scanf("%d", &guess);
        
            if(guess>gen_num && guess<101 && guess>0)
                printf("Guess lower number please!\n");
            else if(guess<gen_num && guess<101 && guess>0)
                printf("Guess higher number please!\n");
            else if(guess==gen_num)
                printf("You guessed it in %d attempts\n", number_of_guesses);
            else
            {
                printf("Number has to be 1 to 100. Try again\n");
                break;
            }
            
	        number_of_guesses++;
	    }while(guess!=gen_num);
	    
	    printf("Play again? Enter 1 to continue or 0 to quit : ");
        scanf("%d", &runner);
        if(runner!=1)
            break;
    }
    return 0;
}