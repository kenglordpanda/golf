#include <stdio.h>
int main() {
  char str[1024];
  fgets(str, 1024, stdin);
  int start = 0;
  int end = 0;
  while (str[start] != '\0' && str[end] != '\n') {
    end++;
  }
  end--;
  int isPalindrome = 0;
  while (start < end) {
    if (str[start] != str[end]) {
      isPalindrome = 1;
      break;
    }
    start++;
    end--;
  }
  return isPalindrome;
}
