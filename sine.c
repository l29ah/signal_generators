#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
	int8_t buf[4096];
	for (int i = 0; i < sizeof(buf); ++i) {
		buf[i] = (int8_t)(sinf((float)i / sizeof(buf) * M_PI * 2) * 0x7f);
	}
	while (1) {
		fwrite(buf, sizeof(buf), 1, stdout);
	}
	return 0;
}
