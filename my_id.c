<<<<<<< HEAD
#include "main.h"

int main(void)
{
	int a;
	int b;
	
	a = my_ppid();
	printf("my ppid is : %d", a);

	b = my_pid();
	printf("my process id is %d\n", b);
	return (0);
}
