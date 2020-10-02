#define N 10
int arr[N];
int fibonacci(int n) {
	if (n <= 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
	for (int i = 0; i <= N - 1; i++)
		arr[i] = fibonacci(i+2);
	return arr[6];
}
//Expected: fib(8)
