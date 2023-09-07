#include "main.h"
int main(void)
{
	int a;

	a = my_ppid();
	prinft("my ppid is : %d", a);

	int u;
	u = my_pid();

	printf("my process id is %d\n", u);
	return (0);
}
