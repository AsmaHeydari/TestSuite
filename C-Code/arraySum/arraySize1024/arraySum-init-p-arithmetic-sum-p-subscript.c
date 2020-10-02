
#define N 1024

int a[N];

void init_p_arithmetic(int *p, int length) {
	int *end = p + length;
	int i = 0;
	while (p < end) {
		*(p++) = ++i;
	}
}

int sum_p_subscript(int *start) {
	int sum = 0;
	for (int i = 0; i < N; ++i) {
		sum += start[i];
	}
	return sum;
}

int main(void) {
	init_p_arithmetic(a, N);
	return sum_p_subscript(a) * 2 == N * (N + 1);
}
