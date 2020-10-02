
#define N 256

int a[N];

void init_p_subscript(int *p) {
	for (int i = 0; i < N; ++i) {
		p[i] = i+1;
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
	init_p_subscript(a);
	return sum_p_subscript(a) * 2 == N * (N + 1);
}
