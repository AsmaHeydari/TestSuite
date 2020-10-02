#define N 100

int sort(int* ptr) {
	int i, j, t;
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (*(ptr + j) < *(ptr + i)) {
				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}
    return *(ptr+N-1);

}

int main(void) {
	int arr[N];
    int i = 0;
    while(i < N){
        arr[i] = N-i;
        i++;
    }
	return sort(arr);
}
//Expected 100
