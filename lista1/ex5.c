#include <stdio.h>

int isIdentityMatrix (int lin, int col, int matrix[lin][col]);

int main () {
  int identityMatrix[2][2] = {{1, 0}, {0, 1}};
  int notIdentityMatrix[2][2] = {{1, 1}, {1, 1}};

  if (isIdentityMatrix(2, 2, identityMatrix)) {
    printf("It's a Identity Matrix\n");
  } else {
    printf("It's not a Identity Matrix\n");
  }
  
  if (isIdentityMatrix(2, 2, notIdentityMatrix)) {
    printf("It's Identity Matrix\n");
  } else {
    printf("It's not Identity Matrix\n");
  }
  
  return 0;
}

int isIdentityMatrix (int lin, int col, int matrix[lin][col]) {

  for (int i = 0; i < lin; i++) {
    for (int j = 0; j < col; j++) {
      if (i == j) {
        if (matrix[i][j] != 1) {
          return 0;
        } 
      } else {
        if (matrix[i][j] != 0) {
          return 0;
        } 
      }
    } 
  }
  return 1;
}