#define N 10
int elem = 5;
int fact(int n) {
	if (n < 2)
		return 1;
	else
		return n * fact(n - 1);
}

int arrayFactorial(int (*a)[N], int *p) {
	int i = *p;
	if ( N - 1 >= i) {
		*a[*p] = fact(i);
	}
	return fact(i);
}

int main(void) {
	int arr[N];
	int (*ptr)[N];
	ptr = &arr;

	return arrayFactorial(ptr, &elem);//returns 5!
}
//Expected 5! = 120
