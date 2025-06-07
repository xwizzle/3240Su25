#include <stdio.h>
#include <stdlib.h>

float sdot(int length, float *x, float *y );

int main( void ) {
  const int N = 1000000000; // The benchmark runs on a fixed size of work
  printf( "Running SDOT operation of size %d x 1\n", N );
  float *x = (float *) malloc( N * sizeof(float) );      // array 1
  float *y = (float *) malloc( N * sizeof(float) );      // array 1

  // Carry out the operation
  sdot( N, x, y );

  // Free up the memory
  free( x );
  free( y );

  return 0;
}
