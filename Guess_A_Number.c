/* ESHITA SAXENA
ROLL NO : BTECH/10223/19
IT*/


// Let's play "Guess a Number"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void guess(int N)
{
    int number, guess, numberofguess = 0;

    // Generating a random number
    number = rand() % N;

    printf("Guess a number between"
           " 1 and %d\n", N);

    // Using a do-while loop that will work until user guesses the correct number
    do {

        if (numberofguess > 5) {
            printf("\nYou Loose!\n");
            break;
        }

        // Input by user
        scanf("%d", &guess);

        // if the number you guessed is  lower
        // than the actual number
        if (guess > number)

        {
            printf("Lower number "
                   "please!\n");
            numberofguess++;
        }

        // if the number you guessed is higher
        // than the actual number
        else if (number > guess)

        {
            printf("Higher number"
                   " please!\n");
            numberofguess++;
        }

        // to print the no of attempts it takes for you to guess the number
        else
            printf("You guessed the"
                   " number in %d "
                   "attempts!\n",
                   numberofguess);

    } while (guess != number);
}

// Driver Code
int main()
{
    int N = 50;

    // Function call
    guess(N);

    return 0;
}
