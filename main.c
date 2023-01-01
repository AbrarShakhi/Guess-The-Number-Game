#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int gen_num, guess, number_of_guesses, runner;
    
    while(1)
    {
	    system("cls");
	    printf("Computer has randomly genarated a number between 1 to 100.\n");
	    printf("Try to guess that number.\n");
	    
	    number_of_guesses=1;
	    srand(time(0));
	    gen_num=rand()%100 + 1;
	    
	    do{
	        scanf("%d", &guess);
	        fflush(stdin);
        
            if(guess>gen_num)
                printf("Guess lower number please! -- ");
            else if(guess<gen_num)
                printf("Guess higher number please! -- ");
            else
                printf("You guessed it in %d attempts\n\n", number_of_guesses);
            
	        number_of_guesses++;
	    }while(guess!=gen_num);
	    
	    printf("1) Play again?\n");
	    printf("0) Quit. \n");
	    printf("Enter your choice: ");
	    scanf("%d", &runner);
	    fflush(stdin);
	    
        if(runner != 1)
        	return 0;
    }
}
