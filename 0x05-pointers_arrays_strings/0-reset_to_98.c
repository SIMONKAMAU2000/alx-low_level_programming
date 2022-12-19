#include "main.h"
#include <stdio.h>

int main(void)
{
	int n;

	n = 98;
	 printf("n=%d\n", n);

	     reset_to_98(&n);

	         printf("n=%d\n", n);

		     return (0);
}
 gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
