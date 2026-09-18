#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char userInput[50];
  // Flush after every printf
  setbuf(stdout, NULL);
  printf("$ ");
  fgets(userInput, sizeof(userInput), stdin);
  userInput[strlen(userInput)-1] = '\0';
  printf("%s: command not found", userInput);
  return 0;
}
