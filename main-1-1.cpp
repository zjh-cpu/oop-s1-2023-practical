#include <stdio.h>

int main()
{
  int array[3] = {1, 2, 3};
  int sum = 0, loop;

  for (loop = 2; loop >= 0; loop--)
  {
    sum += array[loop];
  }

  printf("sum is: %d", sum);
  return 0;
}