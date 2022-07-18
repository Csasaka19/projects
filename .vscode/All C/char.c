#include <stdio.h>
#include <stdlib.h>
 main(){
    //char is just a an integral value
      char c;

      c = 'a';
      while(c <= 'z'){
              printf("value %d char %c\n", c, c);
              c = c+1;
      }
      
      exit(EXIT_SUCCESS);
}