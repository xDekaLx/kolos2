#include <stdio.h>
int main()
{
    int n, positive = 0;
    do
    {
        printf("Ведіть кільскість: ");
        scanf("%i", &n); 
    }
    while ( n < 1 || n > 100);
    int N[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &N[i]);
        if ( N[i] > 0) positive++;
    }
    printf("%i\n", positive);
    if (positive!=0){
        for (int i = 0; i < n; i++)
        {
            if ( N[i] > 0) printf("%i ", N[i]);
        }
    }
    else printf("NO");
}
