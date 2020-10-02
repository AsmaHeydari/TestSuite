int swap(int *p, int *q) {
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
	return *q;
}

int main(void) {
	int a = 1;
	int b = 2;
	int *ptr1 = &a;
	int *ptr2 = &b;
	return swap(ptr1, ptr2);
}
//Expected: 1
