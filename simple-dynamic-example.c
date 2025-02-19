#include <stdio.h>
#include <stdlib.h>

int main() {

  int *students;
  int numStudents = 12;
  students = calloc(numStudents, sizeof(*students));
  printf("\n\n%zd", numStudents * sizeof(*students)); // 48 bytes

  printf("\n\nVariable 'students' starts at %p", students);

  //use the memory

  students[0] = 2;
  students[1] = 4;
  students[2] = 6;

  printf("\n\nValue at index 0 of allocated memory is: %d", students[0]);
  printf("\n\nSize of data at first index is:  %zd", sizeof(students[0]));

  printf("\n\n");

  return 0;

}
