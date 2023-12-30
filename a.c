#include "a.h"

#include <stdio.h>
#include <stdlib.h>

int new_feature(int num) {
  char *buffer = NULL;
  buffer = (char *)malloc(num + 1);
  if (buffer == NULL) return EXIT_FAILURE;
  for (int i = 0; i < num; i++) {
    buffer[i] = '3';
  }
  buffer[num] = 0;
  printf("Result string: %s\n", buffer);
  return EXIT_SUCCESS;
}

int main(void) {
  // TODO
  return new_feature(5);
}
