#include <stdio.h>

int main(void)
{
	//this code produces the error 'unknown escape sequence'
	printf("hello \zac\n");
	return 0;
}
