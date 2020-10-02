int x;
int y;

int f(int *p) {

	if (*p > x)
		return y;
	else
		return x;
}

int main(void) {
	int a = 42;
	int *ptr = &a;
	x = 41;
	y = 40;
	return f(ptr);
}
//Expected: y = 40
