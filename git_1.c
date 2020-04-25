/*
 * Template for the Try_Github assignment
 * first upload this file to your new github repo
 * then, modify it, commit and push the new version
 */

#include <stdio.h>


int sqr(int x) {
  int square = 1;
  for (int i = 1; i<= x; i++)
     square *= x;
  return square;
}


int main() {
  int val = 4;
  if (sqr(val) != 16) {
    printf("value error, %d\n", sqr(val));
  }
  
  else {
    printf("%d square is %d\n", val, sqr(val));
  }

  return 0;
}
