int x = 2;
int y = 3;

int m(int p) {
	while (p > x + y) {
		x = x + y;
	}
	return x;
}

int main(void) {
	int val = 42;
	return m(val);
}
//Expected x = 41
