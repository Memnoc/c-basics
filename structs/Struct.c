#include <stdio.h>
#include <string.h>

// INFO: collection of related variables.
//  data type can be different
//  listed all under one name in a single block of memory
//  very similar to classes in other languages
//  but they have no methods, just variables

struct Player {
  char name[12];
  int score;
};

int main() {

  struct Player player1;
  struct Player player2;

  // HACK: because it's an array (of chars)
  strcpy(player1.name, "Memnoc");
  strcpy(player2.name, "Bra");
  player2.score = 2;
  player1.score = 4;

  printf("%s\n", player1.name);
  printf("%d\n", player1.score);

  printf("%s\n", player2.name);
  printf("%d\n", player2.score);

  return 0;
}
