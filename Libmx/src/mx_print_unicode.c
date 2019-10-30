#include "libmx.h"

void mx_print_unicode(wchar_t c) {
	char out[4];
	if (c < 0x80) { // < 128
		out[0] = (c >> 0 & 0x7F /* 127 */) | 0x00;
		out[1] = 0;
		out[2] = 0;
		out[3] = 0;
	}
	else if (c < 0x0800) { // < 2048
		out[0] = (c >> 6 & 0x1F) | 0xC0;
		out[1] = (c >> 0 & 0x3F) | 0x80;
		out[2] = 0;
		out[3] = 0;
	}
	else if (c < 0x010000) { // < 65536
		out[0] = (c >> 12 & 0x0F) | 0xE0;
		out[1] = (c >> 6 & 0x3F) | 0x80;
		out[2] = (c >> 0 & 0x3F) | 0x80;
		out[3] = 0;
 	}
	else if (c < 0x110000) { // < 1114112    MAX VALUE OF UNICODE - 1114111
		out[0] = (c >> 18 & 0x07) | 0xF0;
		out[1] = (c >> 12 & 0x3F) | 0x80;
		out[2] = (c >> 6 & 0x3F) | 0x80;
		out[3] = (c >> 0 & 0x3F) | 0x80;
 	}
 	write(1, &out, mx_strlen(out));
}
