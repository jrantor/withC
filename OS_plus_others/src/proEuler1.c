#include <stdio.h>


/*
   project euler problem1 
*/

int main(void)
{
  int s3 = 0, s5 = 0, s15 = 0;
  int i;

  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      s3 += i;
    }
    if (i % 5 == 0) {
      s5 += i;
    }

    }

  printf("%d\n", s3 + s5);

  return 0;
}
