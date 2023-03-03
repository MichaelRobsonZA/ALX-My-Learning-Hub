#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int answer, guess;

  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate a random number between 1 and 100
  answer = rand() % 100 + 1;

  // Prompt the user to guess the number
  printf("Guess a number between 1 and 100:\n");
  scanf("%d", &guess);

  // Keep looping until the user correctly guesses the number
  while (guess != answer) {
    if (guess < answer) {
      printf("The number is higher. Guess again:\n");
    } else {
      printf("The number is lower. Guess again:\n");
    }
    scanf("%d", &guess);
  }

  // Announce the correct answer
  printf("Congratulations! You've correctly guessed the number %d.\n", answer);

  return 0;
}

