
//#include "dataset.h"
//#include <stddef.h>
//#include <stdio.h>

// NxN matrices 
void matadd(int N, int M, const int A[], const int B[], int C[])
{
  int i, j;
 
  for (j = 0; j < M; j++) {
    for (i = 0; i < N; i++) {
      C[j*N + i] = A[j*N + i] + B[j*N + i];
      //putchar(C[j*N+i]+'0');
    }
  }
}
int main()
{
  static int input1_data[4] = {0, 1, 2, 3};
  static int input2_data[4] = {4, 5, 6, 7} ;
	static int results_data[4];
	matadd(2, 2, input1_data, input2_data, results_data);
  return 0;
}
