int x;

int f(int one) {
	// both one and x are 1
	return one - x; // returns 0
}

int g(int zero) {
	// both zero and x are 0
	return zero + x;
}

int main(void) {
	// x is set to 1 before f is called
	// x is set to 0 after f returns and before g is called
	return g(x = f(x = 1)); // returns 0
}
