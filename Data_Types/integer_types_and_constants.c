#include <stdio.h>
#include <stdint.h> // stores popular integer types (most of below)
#include <limits.h> // limits of integers
int main(void)
{
	uint32_t u32 = 32; //exactly 32 bits wide
	uint8_t u8 = 255; //exactly 8-bits wide
	int64_t i64 = -65; //exactly 64bit in two complement representation

	signed char c = 127; //required to be one byte
	signed short int si = 32767; //required to be at least 16 bits
	signed int i = 32767; //required to be at least 16 bits
	signed long int li = 2147483647; //required to be at least 32 bits
	signed long long int lli = 214783647; //required to be at least 64 bits

	// all of above can have their unsigned versions
	unsigned int i_1 = 65535;
	unsigned short s = 2767;
	unsigned char c_1 = 255;
	//besides char all types are assumed to be signed, for char itas a thrid character type,
	// different from signed/unsigned, and it depends from platform

	int d = 42;	//decimal constant, base10, always signed
	int o = 052; // octal constant, base8
	int x = 0xaf; //hexadecimal constant, base16/ whether theyre signed/unsigned depends on whether fits
	int X = 0XAf; //letters a-f(case sensitive) represent 10 through 15

	long int i_2 = 0x32; //no suffix represent int or long int
	unsigned int ui_1 = 65535u; //u or U represent unsigned int, or long int
	long int li_1 = 65536l; //l or L represent long int
	puts("I'm working!");
	return 0;
}