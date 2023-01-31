#include <stdio.h>
#include <stdlib.h>

int main() {
     char line[100000];
     char *p, *e;
     long input;
     int count = 0;
     int t;

     printf("Total inputs: ");
     scanf("%d", &t);

     for(int i = 0; i < t; i++) {
          scanf(" %[^\n]", line);
          p = line;
          while(1) {
               input = strtol(p, &e, 10);
               if (p == e) {
                    break;
               }
               count++;
               p = e;
          }

          printf("%d\n", count);
     }
}