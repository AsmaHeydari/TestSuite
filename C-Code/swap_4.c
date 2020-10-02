int swap(int **p, int **q) {
	**p = **p + **q;
	**q = **p - **q;
	**p = **p - **q;
    return **p;
}

int main(void) {
	int a = 1;
	int b = 2;
	int *ptr1 = &a;
	int *ptr2 = &b;
	int **ptr3 = &ptr1;
	int **ptr4 = &ptr2;
	return swap(ptr3, ptr4);
}
//Expected: 2
