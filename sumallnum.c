#include <stdio.h>

int main(void) {
  int n, i, totalSum=0;
  int check=1;
  int number;

  // do while loop to ensure that user enters a positive integer
  do {
    printf("\nEnter a total count n that is positive: ");
    scanf("%d", &n);
    if (n>0) check=0;
  } while (check); 
  
  // for loop to iterate through each count and get a total of n user inputs
  // iteratively add into totalSum
  for(i=0; i<n; ++i) {
    printf("\nEnter number %d: ", (i+1));
    scanf("%d", &number);
    totalSum += number;
  }

  printf("\nThe total sum of %d numbers is %d\n", n, totalSum);
  
  return 0;
}
