


#define DIM_SIZE 5
#define ARRAY_SIZE DIM_SIZE*DIM_SIZE

static int input1_data[ARRAY_SIZE] = {0, 1, 2, 3, 6, 8, 10, 11, 14, 18, 26, 36, 42, 51, 55, 59, 66, 71, 82, 84, 89, 90, 92, 95, 96};
static int input2_data[ARRAY_SIZE] = {9, 10, 13, 17, 18, 20, 22, 25, 27, 36, 37, 43, 44, 45, 51, 53, 69, 70, 84, 86, 87, 88, 94, 96, 97};

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
