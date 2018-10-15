#include <stdio.h>

int main(void)
{
	1 == 0; // evaluates 0
	1 == 1; // evaluates 1

	int x = 5;
	int y = 5;
	int *xptr = &x, *yptr = &y;
	xptr == yptr; // evaluates to 0, operands hold different location addresses
	*xptr == *yptr; // evaluates to 1, operands point at location with same value

	1 != 0; // evaluates to 1
	1 != 1; // evaluates to 0
	int x_1 = 3;
	int y_2 = 3;
	int *xptr_1 = &x_1, *yptr_1 = &y_2;
	xptr != yptr; // evaluates to 1, both point to different loactions
	*xptr_1 != *yptr_1; // evaluates to 0, both operands point to locations which holds the same values

	int someVal = 0;
	!someVal; // this is the same as someVal == 0

	// >, <, <= and >= are obvious :)
	puts("I'm working!");
	return 0;
}