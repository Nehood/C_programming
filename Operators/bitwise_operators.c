#include <stdio.h>
#include <limits.h>

void bit_pattern(int u) // masking = extracting desired bits from variable via logic operations.
{
	int i, x, word;
	unsigned mask = 1;
	word = CHAR_BIT * sizeof(int);
	mask = mask << (word - 1); // shift 1 to leftmost position
	for (int i = 1; i <= word; ++i)
	{
		x = (u & mask) ? 1 : 0;	// identify bit
		printf("%d", x); 	// print bit value
		mask >>= 1; 		// shift mask to right by one bit
	}
}

//some possibilities of masking:
// to copy portion of variable while remainder is filled with 0s - bitwise AND
// to copy portion of variable while remainder is filled with 1s - bitwise OR
// to copy portion of variable while remainder is inverted - use XOR

int main(void)
{
	unsigned int a = 29; // 0001 1101
	unsigned int b = 48; // 0011 0000
	int c = 0;

	c = a & b; // logical and
	printf("%d & %d = %d\n", a, b, c); // 16 = 0001 000

	c = a | b; // logical or
	printf("%d | %d = %d\n", a, b, c); // 61 = 0011 1101

	c = a ^ b; // logical xor
	printf("%d ^ %d = %d\n", a, b, c); // 45 = 0010 1101

	c = ~a; // logical not
	printf("~%d = %d\n", a, c); // -30 = 1110 0010

	c = a << 2; // logical shift left
	printf("%d << 2 = %d\n", a, c); // 116 = 0111 0100

	c = a >> 2; // logical shift right
	printf("%d >> 2 = %d\n", a, c); // 7 = 0000 0111

	unsigned int tmp = 0;		// weird, storing signed (-) number in unsigned one?
	tmp = ~a;
	printf("~%d = %d\n", a, tmp); // -30 = 1110 0010

	int number = 77;
	printf("\nbit value of %i: ", number);
	bit_pattern(number);

	number = 1479291247;
	printf("\nbit value of %i: ", number);
	bit_pattern(number);
	puts("\n");
	return 0;
}