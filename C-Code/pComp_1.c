int a = 1;
int *p = &a;
int *q = &a + 1;

int pComp(int *a, int *b) {
	if (a < b)
		return *a;
	else
		return *a + *b;
}

int main(void) {
	return pComp(p, q);
}
//Expected: 1
