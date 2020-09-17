#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("printf:%f", 8.f);
	// printf("printf:%f", 8.0f);
	printf("printf:%f", 8f);

	return (0);
}
