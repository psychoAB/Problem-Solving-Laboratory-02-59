#include <cstdio>
#include <set>

using namespace std;

int w[30][30];
set<pair<int, int>> v;

int d(int sx, int sy, int ey)
{
    set<pair<int, int>>::iterator t;
    t = v.find(make_pair(sx, sy));
    if(t != v.end())
    {
        return 0;
    }

    if(!w[sy][sx])
    {
        return 0;
    }
    else if(!w[sy][sx + 1])
    {
        return 0;
    }
    else if(!w[sy + 1][sx])
    {
        return 0;
    }
    else if(!w[sy + 1][sx + 1])
    {
        return 0;
    }

    v.insert(make_pair(sx, sy));

    if(sy + 1 == ey)
    {
        return 1;
    }
    else
    {
        return d(sx + 1, sy, ey) + d(sx - 1, sy, ey) + d(sx, sy + 1, ey) + d(sx, sy - 1, ey);
    }

}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    char x[60];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", x);
        for(int j = 0; j < m; j++)
        {
            if(x[j] == '.')
            {
                w[i][j] = 1;
            }
            else
            {
                w[i][j] = 0;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        sum += d(i, 0, n - 1);
    }
    if(sum)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
