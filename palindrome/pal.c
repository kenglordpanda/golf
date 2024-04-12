#include <stdio.h>
int main() {
  char *str = fgets(str, 1024, stdin);
  char *start = str;
  char *end = str;
  while (*end != '\0' && *end != '\n') {
    end++;
  }
  end--;
  int isPalindrome = 0;
  while (start < end) {
    if (*start != *end) {
      isPalindrome = 1;
      break;
    }
    start++;
    end--;
  }
  return isPalindrome;
}
