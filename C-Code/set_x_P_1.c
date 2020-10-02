int a = 1;
int b = 2;
int *x = &a;
int *y = &b;

int* set_px(void) {
	x = y;
	return x;
}

int main(void) {
	return *set_px();
}
//Expected: 2
