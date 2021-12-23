#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int count = 1, c = 0, u = 0;
   srand(time(0));
   c = rand() % 10 + 1;
   printf("\n\n\n\nEnter The number between 1 to 10 only\n______________________________________________\n");
start:
   printf("\nGuess the number : ");
   scanf("%d", &u);
   if (c == u)
   {
      printf("Yess U guessed it correctly!!\n\n");
      printf("\n------------------------------------------------");
   }
   else if (c > u)
   {
      printf("You guessed LESS than the required number\n\n");
      count++;
      printf("\n------------------------------------------------");
      goto start;
   }
   else if (c < u)
   {
      printf("You guessed GREATER than the required number\n\n");
      count++;
      printf("\n------------------------------------------------");
      goto start;
   }
   printf("\nNumber of attempts taken: %d", count);
   return 0;
}