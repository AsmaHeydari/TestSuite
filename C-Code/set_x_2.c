int x;

int set_x(int y) {
	x = y;
	return x;
}

int main(void) {
	int z = 42;
	return set_x(z);
}
//Expected 42
