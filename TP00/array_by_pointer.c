#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);
    int v[n];
    int *p = v;
    printf("Enter n elements:");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = v;
    printf("[ %d ,", *p);
    p = p + 1;
    for (int i = 0; i < n - 2; i++)
    {
        printf(" %d ,", *p);
        p++;
    }
    printf(" %d ]", *p);
}
