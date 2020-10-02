#define N 5

int a[N];
int x;
int add() {
	int res = 0;
	int i = 0;
	while (i < N) {
		res = res + a[i];
		i++;
	}
	return res;
}

int main(void) {
	for (int i = 0; i < N; i++)
		a[i] = i;
	if (a[x] == x)
		return add();
	else
		return 0;
}
//Expected Sigma(N) = 10
