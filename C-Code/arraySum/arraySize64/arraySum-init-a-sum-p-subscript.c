
#define N 64

int a[N];

void init_a(void) {
	for (int i = 0; i < N; ++i) {
		a[i] = i+1;
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
	init_a();
	return sum_p_subscript(a) * 2 == N * (N + 1);
}
