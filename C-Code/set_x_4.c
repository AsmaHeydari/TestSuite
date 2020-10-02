int a = 1;
int b = 2;
int set_x(int x, int y) {
	x = y;
	return x;
}

int main(void) {
	return set_x(a, b);
}
//Expected: 2
