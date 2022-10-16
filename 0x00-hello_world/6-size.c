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

	printf("Size of a char:%lu byte(s)\n", sizeof(c));
	printf("Size of an int:%lu byte(s)\n", sizeof(i));
	printf("Size of a long int:%lu byte(s)\n", sizeof(lt));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(llt));
	printf("Size of a float:%lu byte(s)\n", sizeof(f));

	return (0);

}
