int a = 3;
int *p = &a;
int *q = &a;

int pComp(int *a, int *b) {
	if (a == b)
		return *a;
	else
		return *a + *b;
}

int main(void) {

	return pComp(p, q);
}
//Expected: 3
