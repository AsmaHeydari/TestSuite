int x;
int y;

int f(int one, int two) {
	// both one and x are 1
	// both two and y are 2
	return (y - one) - x; // returns 0
}

int x_plus_y() {
	// x is either 0 or 1
	// y is either 0 or 2
	return x + y; // returns one of {0,1,2,3}
}

int main(void) {
	int z;
	// x is set to 1 and y is set to 2 before f is called, which returns 0
	// x_plus_y() can interleave at any point, returning one of {0,1,2,3}
	z = f(x = 1, y = 2) + x_plus_y(); // z is one of {0,1,2,3}
	int error;
	if (z < 0)
		error = -1;
	else if (z > 3)
		error = 1;
	else
		error = 0;
	return error; // returns 0
}
