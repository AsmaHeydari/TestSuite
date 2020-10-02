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
	int *ptr1 = &a;
	int *ptr2 = &a;
	return *ptrSwap(ptr1, ptr2);
}
//Expected: 1
