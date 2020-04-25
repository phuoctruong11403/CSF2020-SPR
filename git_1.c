/*
 * Template for the Try_Github assignment
 * first upload this file to your new github repo
 * then, modify it, commit and push the new version
 */

#include <stdio.h>


int sqr(int x) {
  return x;
}


int main() {
  int val = 4;
  if (sqr(val) != 16) {
    printf("value error, %d\n", sqr(val));
  }

  return 0;
}
