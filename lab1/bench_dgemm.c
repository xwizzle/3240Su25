#include <stdio.h>
#include <stdlib.h>

void dgemm(int length, double *x, double *y, double *z);

int main( void ) {
  const int N = 1024; // The benchmark runs on a fixed size of work
  printf( "Running DGEMM operation of size %d x 1\n", N );
  double *x = (double *) malloc( N * N * sizeof(double) );      // array 1
  double *y = (double *) malloc( N * N * sizeof(double) );      // array 2
  double *z = (double *) malloc( N * N * sizeof(double) );      // result array 

  // Carry out the operation
  dgemm( N, x, y, z );

  // Free up the memory
  free( x );
  free( y );
  free( z );

  return 0;
}
