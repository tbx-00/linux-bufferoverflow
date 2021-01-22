#include <stdio.h>


int main(void)
{

	char input[48];

	write(1, "Hello World\n", 0xd);
	write(1, "Give me a shell!\n", 0x11);
	read(0, input, 300);
	return 0;
}


