
#define N 4

int a[N];

void init_p_subscript(int *p) {
	for (int i = 0; i < N; ++i) {
		p[i] = i+1;
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
	init_p_subscript(a);
	return sum_p_arithmetic(a, N) * 2 == N * (N + 1);
}
