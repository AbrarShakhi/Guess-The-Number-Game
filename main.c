#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
int main()
{
    int gen_num, guess, number_of_guesses, runner;
    while (1)
    {
        system("cls");
        printf("Computer has randomly genarated a number between 1 to 100.\n");
        printf("Try to guess that number. -- ");

        number_of_guesses = 1;
        srand(time(0));
        gen_num = rand() % 100 + 1;
        do
        {
            scanf("%d", &guess);
            fflush(stdin);

            if (guess > gen_num && guess > 0 && guess <= 100)
                printf("Guess lower number please! -- ");
            else if (guess < gen_num && guess > 0 && guess <= 100)
                printf("Guess higher number please! -- ");
            else if (guess == -99)
            {
                printf("%d\n", gen_num);
                break;
            }
            else if (guess == gen_num)
                printf("You guessed it in %d attempts\n\n", number_of_guesses);
            else
                printf("Choose between 1 to 100. -- ");

            number_of_guesses++;
        } while (guess != gen_num);

        printf("1) Play again?\n");
        printf("0) Quit. \n");
        printf("Enter your choice: ");
        scanf("%d", &runner);
        fflush(stdin);

        if (runner != 1)
            return 0;
    }
}
