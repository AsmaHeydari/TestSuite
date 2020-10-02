#define N 100
int array[N];
int (*arr)[N];

int sort(int (*a)[N]) {
	int i, j, t;

	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if ((*a)[j] < (*a)[i]) {
				t = (*a)[i];
				(*a)[i] = (*a)[j];
				(*a)[j] = t;
			}
		}
	}
	return (*a)[N-1];
}

int main(void) {

	for (int i = 0; i < N; i++) {
		array[i] = N - i;
	}
    arr = &array;
	return sort(arr);

}
//Expected N = 100
