#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  char userInput[50];
  bool inTerminal = true;
  while(inTerminal) {
  //Flush after every printf
  setbuf(stdout, NULL);
  printf("$ ");
  fgets(userInput, sizeof(userInput), stdin);
  userInput[strlen(userInput)-1] = '\0';
  printf("%s: command not found\n", userInput);
  }
  return 0;
}
