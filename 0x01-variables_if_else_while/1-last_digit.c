#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * The string Last difit of n
 * Return: 0
 */
int main(void)
{
  int n, lastDigit;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  lastDigit = n % 10;
if (lastDigit > 5 )
{
printf("Last digit of %d and is greater than 5\n", n, lastDigit);
}
 else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if(lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and ", n, lastDigit);
printf("not 0\n");
}
return (0);
}
