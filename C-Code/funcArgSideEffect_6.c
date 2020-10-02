int x;
int y;

int f(int one) {
	// both one and x are 1, y is 2
	return (y - one) - x; // returns 0
}

int main(void) {
	// x is set to 1 and y is set to 2 before f is called
	return f((y = 2) - (x = 1)); // returns 0
}
