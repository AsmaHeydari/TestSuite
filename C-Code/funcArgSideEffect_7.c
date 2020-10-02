int x;
int y;

int f(int one) {
	// both one and x are 1, y is 2
	return (y - one) - x; // returns 0
}

int x_plus_y() {
	// x is either 0 or 1
	// y is either 0 or 2
	return x + y; // returns one of {0,1,2,3}
}

int main(void) {
	int z;
	// x is set to 1 and y is set to 2 before f is called, returning 0
	// x_plus_y() can interleave at any point, returning one of {0,1,2,3}
	z = f((y = 2) - (x = 1)) + x_plus_y(); // z is one of {0,1,2,3}
	int error;
	if (z <= -1)
		error = -1;
	else if (z >= 4)
		error = 1;
	else
		error = 0;
	return error; // returns 0

}
