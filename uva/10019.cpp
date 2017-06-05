#include <cstdio>
#include <vector>
#include <set>
#include <cstdlib>

using namespace std;

vector<pair<int, int>> r;

int f1(int n)
{
    int s = 0;
    while(n != 0)
    {
        int a = n & 1;
        s += a;
        n >>= 1;
    }
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);

    char c[10];

    for(int i = 0; i < n; i++)
    {
        char c[10];
        char *p;

        scanf("%s", c);
        p = c;

        int x = atoi(c);
        int y = 0;

        while(*p != '\0')
        {
            int t;
            t = ((int)*p) - 48;
            y = (y & 0b1111111111110000) | (t & 0b1111);
            y <<= 4;
            p++;
        }

        r.push_back(make_pair(f1(x), f1(y)));
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", r[i].first, r[i].second);
    }
    return 0;
}
