#include <stdio.h>
#include <string.h>

const int SIZE = 300;

void vuln()
{
	char age[100];
	
	fgets(age, SIZE, stdin);

}

int main()
{

	puts("Enter in your age: ");
	vuln();
	return 0;
}
