#include <stdio.h>

int main()
{
    int a, i;

    
    printf("Enter a value: ");
    scanf("%d", &a);

    for(i=a; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}