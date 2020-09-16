#include <stdio.h>

int main()
{
  int setA[4] = {1, 2, 3, 5};
  int SetASize = 4;

  int setB[4] = {9, 10, 11, 15};
  int SetBSize = 4;

  int a, b;

  printf("The cartesian product is [");
  for (a = 0; a < SetASize; a++)
    for (b = 0; b < SetBSize; b++)
      printf("[%d, %d] ", setA[a], setB[b]);

  printf("}");
  return 0;
}

