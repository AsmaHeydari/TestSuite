
#define N 256

int a[N];

void init_p_arithmetic(int *p, int length) {
	int *end = p + length;
	int i = 0;
	while (p < end) {
		*(p++) = ++i;
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
	init_p_arithmetic(a, N);
	return sum_p_arithmetic(a, N) * 2 == N * (N + 1);
}
