int x = 0;
int y = 1;

int set_x() {
	x = y;
	return x;
}

int main(void) {
    return set_x();
}
//Expected: 1
