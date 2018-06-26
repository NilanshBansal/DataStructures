#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printMatrix(int arr[100][100], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int arr[100][100], rowno = 0, colno = 0, maxrow, maxcol;
  printf("enter no of rows: ");
  scanf("%d", & maxrow);
  printf("enter no of cols: ");
  scanf("%d", & maxcol);
  printf("\nenter the values of matrix: ");
  for (int i = 0; i < maxrow; i++) {
    for (int j = 0; j < maxcol; j++) {
      scanf("%d", & arr[i][j]);
    }
  }
  printf("\nprinting original matrix: \n");

  printMatrix(arr, maxrow, maxcol);

  printf("soln is: \n");
  for (int i = 0; i < maxrow; i++) {
    // printf("\ni is : %d \n", i);
    if (i % 2 == 0) {
      for (int j = 0; j < maxcol; j++) {
        printf("%d ", arr[i][j]);
      }
    }
      else {
        for (int j = maxcol-1; j >= 0; j--) {
          printf("%d ", arr[i][j]);
        }
      }
    }
  
  printf("\n");
  return 0;
}
