int x;
int y;

int f(int one) {
	// both one and x are 1, y is either 0 or 2
	return (one + x) + y; // returns 2 or 4
}

int g(int two) {
	// both two and y are 2, x is either 0 or 1
	return (two - x) - y; // returns 0 or -1
}

int main(void) {
	int z;
	// x is set to 1 before f is called
	// y is set to 2 before g is called
	// but evaluation order between the two is unspecified
	z = f(x = 1) + g(y = 2); // z is one of {1,2,3,4}
	int error;
	if (z <= 0)
		error = -1;
	else if (z >= 5)
		error = 1;
	else
		error = 0;
	return error; // returns 0
}
