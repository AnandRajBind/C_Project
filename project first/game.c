#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, ngusess = 1; //number gusess
    srand(time(0));
    number = rand() % 100 + 1; // generate a random number 1 to 100
    //printf("Random number is %d\n", number); // keep running the loop until the number is guseed
    
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", & guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", ngusess);
        }
        ngusess++;
    } while (guess != number);
  getch();   
    return 0;
}