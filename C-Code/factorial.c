int fact(int n) {
	if (1 >= n)
		return 1;
	else
		return n * fact(n - 1);
}

int main(void) {
	int f = 10;
	return fact(f);
}
//Expected: 10! = 3628800
