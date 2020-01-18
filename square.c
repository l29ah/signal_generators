#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t buf[4096];
	const unsigned divisor = 1;	// a kludge to lower the frequency
	for (int i = 0; i < sizeof(buf); ++i) {
		buf[i] = (i / divisor) % 2 ? 0x7f : -0x80;
	}
	while (1) {
		fwrite(buf, sizeof(buf), 1, stdout);
	}
	return 0;
}
