// main.c
#include "mathutils.h"
#include <stdio.h>

void greet();

int main() {
  printf("Hello, CMake!\n");
  greet();

  int sum = add(5, 3);
  int difference = subtract(10, 4);

  printf("Math results: 5 + 3 = %d, 10 - 4 = %d\n", sum, difference);

  return 0;
}