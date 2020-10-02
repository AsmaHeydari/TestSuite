
#define N 4096

int a[N];

void init_a(void) {
	for (int i = 0; i < N; ++i) {
		a[i] = i+1;
	}
}

int sum_p_arithmetic(int *p, int length) {
	int *end = p + length;
	int sum = 0;
	while (p < end) {
		sum += *(p++);
	}
	return sum;
}

int main(void) {
	init_a();
	return sum_p_arithmetic(a, N) * 2 == N * (N + 1);
}
