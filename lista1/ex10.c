#include <stdio.h>
#include <stdlib.h>

int strlenImpl(char* string);
int strcmpImpl(char* string1, char* string2);

int main() {

  char *string1 = "Germano";
  char *string2 = "Germanoo";

  printf("%s Length: %d\n", string1, strlenImpl(string1));
  printf("%s Length: %d\n", string2, strlenImpl(string2));

  if (!strcmpImpl(string1, string1)) {
    printf("EQUAL!\n");
  } else {
    printf("NOT EQUAL!\n");
  }

  if (!strcmpImpl(string1, string2)) {
    printf("EQUAL!\n");
  } else {
    printf("NOT EQUAL!\n");
  }
  
  return 0;
}

int strlenImpl(char* string) {
  int len=0;
  for (int i = 0; string[i] != '\0'; i++) {
    len++;
  }
  return len;
}

int strcmpImpl(char* string1, char* string2) {
  int tam1 = strlenImpl(string1);
  int tam2 = strlenImpl(string2);

  if (tam1 != tam2) {
    return 1;
  } else {
    for (int i = 0; string1[i] != '\0'; i++) {
      if (string1[i] > string2[i]) {
        return 1;
      } else if (string1[i] < string2[i]) {
        return -1;
      }
    }
  }
  
  return 0;
}