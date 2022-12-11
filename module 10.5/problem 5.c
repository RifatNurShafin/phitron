#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int j, c, k = 0;

    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
                c++;
        }
        if (c == 0)
            k++;
    }
    printf("%d\n", k);
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
                c++;
        }
        if (c == 0)
            printf("%d ", a[i]);
    }
}