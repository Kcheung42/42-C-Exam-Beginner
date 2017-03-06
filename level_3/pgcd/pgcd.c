
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int a;
	int b;

	if(argc != 3)
	{
		printf("\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (a < b)
		i = a;
	else
		i = b;
	while( i > 1)
	{
		if(a % i == 0 && b % i == 0)
			{
				printf("%d\n", i);
				return(1);
			}
		i--;
	}
	printf("%d\n", 1);
	return(1);
}