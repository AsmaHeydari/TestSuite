#define N 100

int arr1[N];
int arr2[N];

int copy(int *p, int *q) {
	int i = 0;
	while (i < N) {
		*(p + i) = *(q + i);
		i++;
	}
	return i;
}
int main(void) {
	for(int i = 0; i < N; i++){
		arr2[i] = i;
	}
	copy(arr1, arr2);
	return arr1[N-1];
}
//Expected N-1 = 99
