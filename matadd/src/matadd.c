
#define DIM_SIZE 3
#define ARRAY_SIZE DIM_SIZE*DIM_SIZE

static int input1_data[ARRAY_SIZE] = {353, 533, 155, 955, 213, 952, 522, 146, 664};
static int input2_data[ARRAY_SIZE] = {558, 904, 879, 641, 130, 324, 575, 157, 326};

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
