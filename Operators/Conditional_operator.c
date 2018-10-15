# include <stdio.h>

int main()
{
	int x = 5;
	int y = 42;
	int z = 53;

	printf("%i, %i\n", 1 ? x : y, 0 ? x : y); // evaluates to '5, 42'

	int big = x > y ? (x > z ? x : z)
					: (y > z ? y : z);
	printf("%i\n", big); // evaluates to 

	FILE *even, *odds;
	int n = 10;
	size_t k = 0;

	even = fopen("even.txt", "w");
	odds = fopen("odds.txt", "w");

	for (k = 1; k < n + 1; ++k)
	{
		k % 2 == 0 ? fprintf(even, "\t%5ld\n", k)
				   : fprintf(odds, "\t%5ld\n", k);
	}
	fclose(even);
	fclose(odds);

	// exp1 ? exp2 : exp3 ? exp4 : exp5 -> conditional operators associates from right to left
	// so above expression is evaluated: exp1 ? exp2 (exp3 ? exp4 : exp5)
	return 0;
}