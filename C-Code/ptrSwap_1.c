int* ptrSwap(int *p, int *q) {
	int *tmp;
	if (p != q) {
		tmp = *q;
		*q = *p;
		*p = tmp;

	}
	return p;
}

int main(void) {

	int a = 1;
	int b = 2;
	int *ptr1 = &a;
	int *ptr2 = &b;

	return *ptrSwap(ptr1, ptr2);
}
//Expected: 2
