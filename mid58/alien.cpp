#include <cstdio>
#include <cmath>

int main()
{
    int n, a, b, r;
    scanf("%d %d %d %d", &n, &a, &b, &r);

    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        
        if((int)pow(a - x, 2) + (int)pow(b - y, 2) <= (int)pow(r, 2))
        {
            sum++;
        }
    }

    printf("%d\n", sum);
    return 0;
}
