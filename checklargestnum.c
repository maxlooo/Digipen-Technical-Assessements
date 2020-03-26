#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, largest=0;
  int *array;

  printf("\nEnter the number of positive integers you want to enter: ");
  scanf("%d", &n);
  array = (int*) malloc(n * sizeof(int));
  for (int i=0; i<n; i++) {
    printf("\nEnter an integer: ");
    scanf("%d", &array[i]);
    if (array[i]>largest) largest = array[i];
  }
  printf("\nBased on what you entered, largest integer = %d", largest);
  
  free(array);
  array=NULL;
  return 0;
}
