int a = 42;
int b = 20;

int* m(int *p, int *q) {
	if (*p >= *q)
		return p;
    else
        return q;

}
int main(void) {
	int *ptr1 = &a;
	int *ptr2 = &b;

	return *m(ptr1, ptr2);
}
//Expected: 42.
