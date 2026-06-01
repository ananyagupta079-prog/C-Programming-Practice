#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    fgets(s, sizeof(s), stdin);
    // print hello world
    printf("%s", "Hello, World!\n");
    // print string
    printf("%s", s);
    return 0;
}