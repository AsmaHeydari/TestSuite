int x;

int set_x(int y) {
	x = 0;
	return y;
}

int main(void) {
	x = 1;
	return x + set_x(x);
}
//Underspecified. Expected 1 from gcc, 2 from llvm.
