int *x;

int set_px(int *y) {
	*y = *y + 1;
	*x = *y;
	return *x;
}

int main(void) {
	int z = 42;
	x = &z;
	return *x + set_px(x);
}
//Expected: 85
