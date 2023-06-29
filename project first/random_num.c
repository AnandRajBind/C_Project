#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
    int number;

    srand(time(0));

    number = rand() % 100 + 1; // generate a random number 1 to 100
    // keep running the loop until the number is guseed
    printf("Random number is %d\n", number);
    getch();
    return 0;
}