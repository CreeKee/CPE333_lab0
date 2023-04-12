

static int input1_data = 81;
static int input2_data = 25;
// NxN matrices 
void mult(int a, int b, int* c)
{
  *c = a*b;
}
void main()
{
	static int results_data;
	mult(input1_data, input2_data, &results_data);
}
