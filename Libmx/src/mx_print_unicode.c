#include "libmx.h"

void mx_print_unicode(wchar_t c) {
	if (c < 0x80 /* 128 */ ) {
		char out[1]; /* 1 bytes  */
		out[0] = (c >> 0 & 0x7F /* 127 */) | 0x00;
		write(1, out, 1);
	}
	else if (c < 0x0800 /* 2048 */) {
	char out[2];/* 2 bytes  */
		out[0] = (c >> 6 & 0x1F /* 127 */) | 0xC0;
		out[1] = (c >> 0 & 0x3F /* 63 */) | 0x80;
		write(1, out, 2);

	}
	else if (c < 0x010000 /* 65536 */) {
	char out[3];/* 3 bytes  */
		out[0] = (c >> 12 & 0x0F /* 7 */) | 0xE0;
		out[1] = (c >> 6 & 0x3F /* 63 */) | 0x80;
		out[2] = (c >> 0 & 0x3F /* 63 */) | 0x80;
		write(1, out, 3);
 	}
	else if (c < 0x110000) {
		char out[4];/* 4 bytes  */
		out[0] = (c >> 18 & 0x07 /* 15 */) | 0xF0;
		out[1] = (c >> 12 & 0x3F /* 63 */) | 0x80;
		out[2] = (c >> 6 & 0x3F /* 63 */) | 0x80;
		out[3] = (c >> 0 & 0x3F /* 63 */) | 0x80;
		write(1, out, 4);
 	}
}
