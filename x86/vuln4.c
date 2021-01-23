#include <stdio.h>
#include <string.h>


void echo()
{
    char buffer[800];

    printf("Enter some text:\n");
    scanf("%s", buffer);
    printf("You entered: %s\n", buffer);    
}

int main()
{
    echo();

    return 0;
}
