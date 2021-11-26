#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "Hello, World!";
    int length = strlen(s);
    char *t;
    for (int i = 0; i < length; i++)
    {
        t[i] = s[length - i];
    }
    printf("%s\n", t);
    return 0;
}
