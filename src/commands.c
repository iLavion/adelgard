#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool exec_cmd(const char *input) {
  if (strcmp(input, "ping") == 0) {
    puts("pong");
  } else if (strcmp(input, "q") == 0) {
    puts("Goodbye world.");
    return false;
  } else {
    puts("Unknown command.");
  }

  return true;
};
