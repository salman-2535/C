#include <stdio.h>
void print(char *str[]);
int main(void) {
  char *deck[] = {"One", "Two", "Three", "Four", "Five"};
  return 0;
}

void print(char *str[]) {
  for (size_t i = 0; i < 5; i++)
    printf("%-10s", str[i]);
  putchar('\n');
}
