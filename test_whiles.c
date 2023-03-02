#include "test.h"

int test_do_while()
{
	int n = 10;
	do{
		printf("%d\n",n);
		n++;
	}while (n < 10);

	return (0);

}

int test_while()
{
	int n = 10;
	while (n < 10)
    {
        printf("%d\n",n);
        n++;
    }

	return (0);
}