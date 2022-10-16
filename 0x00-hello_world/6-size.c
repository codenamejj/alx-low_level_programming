#include <stdio.h>


int main(void)
/**entry point */

{
	char c;

	int i;

	long int lt;

	long long int llt;

	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
/** evaluates to 1 byte*/
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
/** evaluates to 4 byte*/
	printf("Size of a long int: %lu byte(s)\n", sizeof(lt));
/** evaluates to 4 byte*/
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llt));
/** evaluates to 8 byte*/
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
/** evaluates to 4 byte*/

	return (0);
/**evalutes to 0 (success)*/

}
