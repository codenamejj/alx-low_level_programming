#include <stdio.h>

/* start -main, return is 0*/

int main(void)

{
	char c;

	int i;

	long int lt;

	long long int llt;

	float f;

	printf("Size of a char:%lu", (long unsigned int)sizeof(c));
	printf("Size of an int:%lu", (long unsigned int)sizeof(i));
	printf("Size of a long int:%lu", (long unsigned int)sizeof(lt));
	printf("Size of a long long int:%lu", (long unsigned int)sizeof(llt));
	printf("Size of a float:%lu", (long unsigned int)sizeof(f));

	return (0);

}
