#include <stdio.h>
#include <string.h>

struct Student {
  char name[12];
  float gpa;
};

int main() {

  struct Student student1 = {"Jim", 5.0};
  struct Student student2 = {"Dwight", 8.0};
  struct Student student3 = {"Pam", 6.0};
  struct Student student4 = {"Michael", 2.0};

  struct Student students[] = {student1, student2, student3, student4};

  for (int i = 0; i < sizeof(students) / sizeof(students)[0]; i++) {
    // printf("Name: %s\n", students[i].name);
    // printf("GPA: %f\n", students[i].gpa);
    printf("Name: %s\nGPA: %.2f\n", students[i].name, students[i].gpa);
  }

  return 0;
}
