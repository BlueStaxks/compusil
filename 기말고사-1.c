int Count(unsigned int x) {
	int N = 0;
	x ^= 0xFFFFFFFF
		while (x) {
			N++;
			x = x & (x - 1);
		}
	return N;
}

x의 보수를 활용하여   unsigned int(32비트) 내의 0의 개수를 구하는 프로그램이다.