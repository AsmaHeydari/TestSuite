int swap(int *p, int q) {
	*p = *p + q;
	q = *p - q;
	*p = *p - q;
	return *p;
}

int main(void) {
	int a = 1;
	int b = 2;
	int *ptr1 = &a;
	return swap(ptr1, b);
}
//Expected: 2
