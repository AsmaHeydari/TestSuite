#define N 100

int a[N];
int x = 2;
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
		a[i] = 2 * i;
	if (a[x] == x)
		return add();
	else
		return 0;
}
//Expected 0
