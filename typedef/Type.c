#include <stdio.h>

/* NOTE: it's a reserved keyword to give an existing datatype a "nickname"
 * from char user1[25] = "Name"
 * to typedef char user[25]; -> user user1 = "Name";
 */

typedef char user[25];

/* HACK: used a lot with structs
 */

typedef struct {
  char name[25];
  int score;
  int id;
} User;

int main() {

  user user1 = "Bro";

  // struct User user2 = {"Memnoc", 10, 1};
  /* HACK: don't have to type the struct keyword
   */
  User user2 = {"Memnoc", 10, 1};
  User user3 = {"Brah", 15, 8};

  printf("%s\n", user2.name);
  printf("%d\n", user2.score);
  printf("%d\n", user2.id);

  printf("%s\n", user3.name);
  printf("%d\n", user3.score);
  printf("%d\n", user3.id);

  return 0;
}
