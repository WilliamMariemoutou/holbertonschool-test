#include <stdio.h>

/* Function that prints a diagonal of '/' and '-' */
void print_diagonal(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				putchar('\\'); 
			else if (j < i)
				putchar(' '); 
			 
		}
		putchar('\n');
	}
}

int main(void) {
	print_diagonal(5);
	return 0;
}
