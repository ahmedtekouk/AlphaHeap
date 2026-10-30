#include <stdio.h>
#include <stdlib.h>
#include "../src/aheap.h"

int main(void)
{
	char text[] = "Error!";
	int *ptr;
	int reqs = 4 * sizeof(int);
	malloc_int(&ptr , reqs , text);
	make_array(&ptr , 4 , 10);
	print_array(ptr , 4);
	auto_free(&ptr);
	return 0;
}
