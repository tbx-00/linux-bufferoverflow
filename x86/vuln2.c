#include <stdio.h>
#include <string.h>


void vuln()
{
	char name[600];
	gets(name);
}

int main(void)
{


	puts("Enter your name: ");
	vuln();
	return 0;
}


