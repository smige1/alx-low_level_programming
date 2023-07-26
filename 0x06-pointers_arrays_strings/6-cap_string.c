#include <stdio.h>
#include <ctype.h>

char *cap_string(char *str) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (i == 0 || !isalpha(str[i - 1])) {
      if (islower(str[i])) {
        str[i] = toupper(str[i]);
      }
    }
  }
  return str;
}
