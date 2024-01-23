#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses;
  int answer;

  /* HACK: uses current time as seed to generate random numbers
   */
  srand(time(0));

  answer = (rand() % MAX) + MIN;

  do {
    printf("Guess the number: \n");
    scanf("%d", &guess);
    if (guess > answer) {
      printf("Too high! \n");
    } else if (guess < answer) {
      printf("Too low\n");
    } else {
      printf("YOU WIN\n");
    }
    guesses++;
  } while (guess != answer);

  printf("**********************************\n");
  printf("Answer: %d\n", answer);
  printf("Number of guesses: %d\n", guesses);
  printf("**********************************\n");

  return 0;
}
