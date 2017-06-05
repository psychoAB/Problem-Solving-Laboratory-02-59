#include <cstdio>
#include <vector>

using namespace std;

vector<int> near[100000];
int v[100000];

void f(int s)
{
    if(v[s])
    {
        return;
    }

    v[s] = 1;
    for(vector<int>::iterator i = near[s].begin(); i < near[s].end(); i++)
    {
        int x = *i;
        f(x);
    }
    return;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        
        a--;
        b--;
        near[a].push_back(b);
        near[b].push_back(a);
    }

    int c = 0;

    for(int i = 0; i < n; i++)
    {
        if(!v[i])
        {
            f(i);
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}
