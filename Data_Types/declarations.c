#include <stdio.h>

int fn(long, short); // fn is a function taking long and short arguments 
					//and returning an int
int *fn_1(void); // fn_1 is a function taking void and returning pointer to int
int (*fp)(void); // fp is a pointer to function taking void and returning int

int main(void)
{
	char *names[20]; // names is an array of size 20 of a pointer to char
	char (*place)[10]; // parentheses override precedence, so 
						//place is a pointer to an array size 10 of char
	char arr[5][8];	// multiddimensional array of chars 5 x 8
	int **ptr;	// ptr is a pointer to pointer to int
	int fn_2(void), *ptr_1, (*fp_1)(int), arr_1[10][20], num;
	// fn_2 - function taking void returning int, ptr_1 - pointer to int,
	// fp_1 - pointer to function taking and returning int, arr 10x20 of ints, num - int var

	//special cases
	char *arr_2[20];
	// Subscripting arr_1 and dereferencing it yields a char, i.e. *arr[5] is of type char
	int fn_3(char);
	// function taking char and returning int, i.e fn('b') is of type int
	int (*fp_2)(void);
	// Dereferencing fp_2 and then calling it yields int. i.e. (*fp)() is int
	char *strings[10][20];
	//subscripting strings twice and dereferencing it yields char, i.e. *strings[5][15] is a char
 	puts("I'm working!");
	return 0;
}