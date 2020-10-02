int *x;

int* set_px(int *y) {
	x = y;
	return x;
}

int main(void) {
	int z = 42;
	return *set_px(&z);
}
//Expected: 42
