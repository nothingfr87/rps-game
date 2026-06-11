#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkWinner(int userChoice, int computerChoice) {
  if (computerChoice == userChoice) {
    printf("It's a tie!\n");
  } else if (computerChoice == 0 && userChoice == 2) {
    printf("Computer Wins! Rock beats Scissor\n");
  } else if (computerChoice == 1 && userChoice == 0) {
    printf("Computer Wins! Paper beats Rock\n");
  } else if (computerChoice == 2 && userChoice == 1) {
    printf("Computer Wins! Scissor beats Paper\n");
  } else if (computerChoice == 0 && userChoice == 1) {
    printf("You Win! Paper beats Rock\n");
  } else if (computerChoice == 1 && userChoice == 2) {
    printf("You Win! Scissor beats Paper\n");
  } else if (computerChoice == 2 && userChoice == 0) {
    printf("You Win! Rock beats Scissor\n");
  }
}

int main() {
  srand(time(NULL));
  char choices[][10] = {"Rock", "Paper", "Scissor"};
  int userChoice = 0;
  int computerChoice = 0;

  printf("Rock Paper Scissor Game!\n");
  printf("Begin!\n");
  printf("1. Rock\n");
  printf("2. Paper\n");
  printf("3. Scissor\n");

  printf("Choose an option: ");
  scanf("%d", &userChoice);

  if (userChoice < 1 && userChoice > 3) {
    printf("Please Choose an Invalid Choice!\n");
    return 1;
  }

  userChoice -= 1;
  printf("You Chose %s\n", choices[userChoice]);

  computerChoice = ((rand() % (3 - 1 + 1)) + 1) - 1;
  printf("Computer Chose %s\n", choices[computerChoice]);

  checkWinner(userChoice, computerChoice);

  return 0;
}
