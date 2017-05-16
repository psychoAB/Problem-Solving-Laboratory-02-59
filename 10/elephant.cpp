#include <cstdio>

int x[100000];
int r[100000];

void f(int n)
{
    if(n <= 1)
    {
        r[n] = 0;
        return;
    }
    else if(n == 2)
    {
        r[n] = x[n];
        return;
    }
    
    f(n - 1);

    int max = 0;
    for(int i = 0; i < n - 2; i++)
    {
        if(max < r[i])
        {
            max = r[i];
        }
    }
    r[n] = max + x[n];
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    f(n - 1);

    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(max < r[i])
        {
            max = r[i];
        }
    }
    printf("%d\n", max);

    return 0;
}
