

#define DIM_SIZE 5
#define ARRAY_SIZE DIM_SIZE*DIM_SIZE

static int input1_data[ARRAY_SIZE] = {0, 1, 2, 3, 6, 8, 10, 11, 14, 18, 26, 36, 42, 51, 55, 59, 66, 71, 82, 84, 89, 90, 92, 95, 96};
static int input2_data[ARRAY_SIZE] = {9, 10, 13, 17, 18, 20, 22, 25, 27, 36, 37, 43, 44, 45, 51, 53, 69, 70, 84, 86, 87, 88, 94, 96, 97};

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
