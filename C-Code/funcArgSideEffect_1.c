int x;

int f(int one) {
	// both one and x are 1
	return one - x; // returns 0
}

int main(void) {
	// x is set to 1 before f is called
	return f(x = 1); // returns 0
}
