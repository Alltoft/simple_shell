#include "main.h"
#include <stdio.h>
#include <unistd.h>

int main(void);
{
	int u;
	u = my_pid();

	printf("my process id is %d\n", u);
	return (0);
}
