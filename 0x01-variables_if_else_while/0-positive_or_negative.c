#include <stdlib.h>
#include <time.h>
/**
 * checks number
 *
 * checks if n is =, - or 0
 * Return: 0 always
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
			printf("%d", n);
		if(n > 0) {
			printf("is positive\n");
		} else if (n == 0) {
			printf("is zero\n");
		} else {
			printf("is negative");
		}
		return (0);
}
