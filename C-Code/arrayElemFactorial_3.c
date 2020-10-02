#define N 10
int elem = 5;
int *elemPtr = &elem;
int **elemPtrPtr = &elemPtr;
int fact(int n) {
	if (n < 2)
		return 1;
	else
		return n * fact(n - 1);
}

int arrayFactorial(int (*a)[N], int **pp) {
	int i = **pp;
	if ( N - 1 >= i) {
		*a[**pp] = fact(i);
	}
	return fact(i);
}

int main(void) {
	int arr[N];
	int (*ptr)[N];
	ptr = &arr;

	return arrayFactorial(ptr, elemPtrPtr);
}
//Expected 5! = 120
