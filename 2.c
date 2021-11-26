#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
int main ()
{
    string s = get_string();
    for(int i = strlen(s); i > 0; i--)
    {
        printf("%c", s[i]);
    }
    return 0;
}
