#include <stdio.h>

/**
*main = void
*main return = 0 (success)
*/
int main(void)

{
	char c;

	int i;

	long int lt;

	long long int llt;

	float f;

	printf("Size of a char:%lu\n", sizeof(c));
	printf("Size of an int:%lu\n", sizeof(i));
	printf("Size of a long int:%lu\n", sizeof(lt));
	printf("Size of a long long int:%lu\n", sizeof(llt));
	printf("Size of a float:%lu\n", sizeof(f));

	return (0);

}
