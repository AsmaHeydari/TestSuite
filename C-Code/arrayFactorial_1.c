#define N 5
int i = 0;

int fact(int n) {
	if (n < 2)
		return 1;
	else
		return n * fact(n - 1);
}

int arrayFactorial(int (*a)[N]) {
	while ( N - 1 >= i) {
		(*a)[i] = fact(i+1);
		i++;
	}
    return (*a)[N-1];
}

int main(void) {
    int arr[N];
	int (*ptr)[N];
	ptr = &arr;
	return arrayFactorial(ptr);// 5!
}
//Expected 5! = 120
