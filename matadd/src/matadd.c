

#define DIM_SIZE 3
#define ARRAY_SIZE DIM_SIZE*DIM_SIZE
static int input1_data[ARRAY_SIZE] = {7, 20, 23, 36, 46, 78, 87, 96, 97};
static int input2_data[ARRAY_SIZE] = {0, 18, 22, 23, 35, 39, 40, 42, 6};

// NxN matrices 
void matadd(int N, int M, const int A[], const int B[], int C[])
{
  int i, j;
 
  for (j = 0; j < M; j++) {
    for (i = 0; i < N; i++) {
      C[j*N + i] = A[j*N + i] + B[j*N + i];

    }
  }
}
int main()
{

	static int results_data[ARRAY_SIZE];
	matadd(DIM_SIZE, DIM_SIZE, input1_data, input2_data, results_data);
  return 0;
}
