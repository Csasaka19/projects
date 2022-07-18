#include <stdio.h>

int main() {
  char c;
printf("Input your character(s)", c);
 scanf("%c", c);
  c = getchar();
  
  
  while (c != '\n')
  {
      putchar(c);
      c = getchar();
  }
  printf("\n");
    
return 0;
}
