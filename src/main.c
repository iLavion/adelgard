#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "commands.h"

int main(int argc, char **argv) {
  char input[64];
  bool running = true;

  while (running) {
    printf("> ");
    fflush(stdout);

    if (fgets(input, sizeof(input), stdin) == NULL) {
      break;
    }

    if (strchr(input, '\n') == NULL) {
      printf("Input is too long.\n");
      int c;
      while ((c = getchar()) != '\n' && c != EOF) {
      }
      continue;
    }

    input[strcspn(input, "\n")] = '\0';

    if (!exec_cmd(input)) {
      break;
    }
  }

  return 0;
}
