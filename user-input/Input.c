#include <stdio.h>
#include <string.h>

int main() {

  int age;
  char name[25];

  printf("How old are you?\n");
  scanf("%d", &age);

  getchar();

  printf("What is your name?\n");
  // scanf("%s", name); // cannot read white spaces
  fgets(name, sizeof(name), stdin);

  // getting rid of the new line in the output
  name[strcspn(name, "\n")] = '\0';

  printf("\nYou are %d years old\n", age);
  printf("\nHello %s, how are you? \n", name);

  return 0;
}
