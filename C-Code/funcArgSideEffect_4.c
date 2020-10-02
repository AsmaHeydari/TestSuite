int x;
int y;

int f(int one, int two) {
	// both one and x are 1
	// both two and y are 2
	return (y - one) - x; // returns 0
}

int main(void) {
	// x is set to 1 and y is set to 2 before f is called
	return f(x = 1, y = 2); // returns 0
}
