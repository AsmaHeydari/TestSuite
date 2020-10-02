int x = 2;
int y = 3;
int z = 100000;

int m(void) {
	while (z > x + y) {
		x = x + y;
	}
	return x;
}

int main(void) {
	return m();
}
//Expected x = 99998
