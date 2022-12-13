#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int gen_num, guess=1, number_of_guesses;
    
    while(guess!='q' && guess!='Q')
    {
    
	    srand(time(0));
	    gen_num=rand()%100 + 1;
    
	    printf("Computer has randomly genarated a number from 1 to 100.\nTry to guess that number.\n");
	    
	    number_of_guesses=1;
	    do{
	        printf("Is it : ");
	        scanf("%d", &guess);
        
	        if(guess>gen_num)
	            printf("Guess lower number please!\n");
	        else if(guess<gen_num)
	            printf("Guess higher number please!\n");
	        else
	            printf("You guessed it in %d attempts\n", number_of_guesses);
            
	        number_of_guesses++;
	    }while(guess!=gen_num);
	    
	    printf("Want to play again enter 1 or q to quit.");
	    scanf("%d", &guess);
    }

    return 0;
}
