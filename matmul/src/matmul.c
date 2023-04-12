


#define DIM_SIZE 3
#define ARRAY_SIZE DIM_SIZE*DIM_SIZE
static int input1_data[ARRAY_SIZE] = {7, 20, 23, 36, 46, 78, 87, 96, 97};
static int input2_data[ARRAY_SIZE] = {0, 18, 22, 23, 35, 39, 40, 42, 6};

// NxN matrices 
void matmul(int N,  const int A[], const int B[], int C[])
{
  int i, j, k;
 
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      int sum = 0;
      for (k = 0; k < N; k++)
        sum += A[j*N + k] * B[k*N + i];
      C[i + j*N] = sum;
    }
  }
}
int main()
{
	static int results_data[ARRAY_SIZE];
	matmul(DIM_SIZE, input1_data, input2_data, results_data);
  return 0;
}
