#include <stdio.h>

int main(void)
{	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

/*
 * Writting your line of code here...
 * You are no permitted to use a
 * You are not permitted to modify p
 * Only one statement
 * You are not permitted to write any code else than this line of code
 */
*(p + 5) = 98;
/* ...so tha this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
