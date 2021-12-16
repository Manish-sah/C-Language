#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char x = 0; // char x = 'A'  ASCII value of 'A'
    for (x; x < 125; x++)
    {
        printf("%d   %c\n",x, x);
    }
    return 0;
}
