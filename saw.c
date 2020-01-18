#include <stdio.h>
#include <stdint.h>

int main()
{
	uint8_t buf[4096];
	uint8_t val = 0;
	for (int i = 0; i < sizeof(buf); ++i) {
		buf[i] = val++;
	}
	while (1) {
		fwrite(buf, sizeof(buf), 1, stdout);
	}
	return 0;
}
