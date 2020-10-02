#define N 100
int elem = 6;
int fact(int n) {
	if (n < 2)
		return 1;
	else
		return n * fact(n - 1);
}

int arrayFactorial(int (*a)[N], int i) {
	if ( N - 1 >= i) {
		*a[i] = fact(i);
	}
	return fact(i);
}

int main(void) {
	int arr[N];
	int (*ptr)[N];
	ptr = &arr;

	return arrayFactorial(ptr, elem);
}
//Expected 6! = 720
