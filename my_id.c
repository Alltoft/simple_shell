#include "main.h"
int main (void)
{
	int a, u;

	a = my_ppid();
	prinft("my ppid is : %d", a);
	return(0);

	u = my_pid();

	printf("my process id is %d\n", u);
	return (0);
}
