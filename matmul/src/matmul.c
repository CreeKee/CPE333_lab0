

#define DIM_SIZE 3
#define ARRAY_SIZE DIM_SIZE*DIM_SIZE

static int input1_data[ARRAY_SIZE] = {353, 533, 155, 955, 213, 952, 522, 146, 664};
static int input2_data[ARRAY_SIZE] = {558, 904, 879, 641, 130, 324, 575, 157, 326};

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
