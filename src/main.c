#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { ROCK, PAPER, SCISSOR } choice;
const char *choices[] = {"Rock", "Paper", "Scissor"};

void checkWinner(choice userChoice, choice computerChoice) {
  int resultOfGame = (userChoice - computerChoice + 3) % 3;
  if (resultOfGame == 0) {
    printf("It's a tie!\n");
  } else if (resultOfGame == 1) {
    printf("You Win!\n");
  } else if (resultOfGame == 2) {
    printf("Computer Wins!\n");
  }
}

int main() {
  srand(time(NULL));
  choice userChoice = 0;
  choice computerChoice = 0;

  printf("Rock Paper Scissor Game!\n");
  printf("Begin!\n");
  printf("1. Rock\n");
  printf("2. Paper\n");
  printf("3. Scissor\n");

  printf("Choose an option: ");
  scanf("%d", &userChoice);

  if (userChoice < 1 || userChoice > 3) {
    printf("Please Choose an Invalid Choice!\n");
    return 1;
  }

  userChoice -= 1;
  printf("You Chose %s\n", choices[userChoice]);

  computerChoice = rand() % 3;
  printf("Computer Chose %s\n", choices[computerChoice]);

  checkWinner(userChoice, computerChoice);

  return 0;
}
