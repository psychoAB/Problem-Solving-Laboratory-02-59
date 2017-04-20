#include <cstdio>
#include <set>

using namespace std;

int main()
{
    int n,k;
    int p[200000];
    int m[200000];
    int sp[200000];
    set<pair<int, int>> r;
    r.insert(make_pair(0, 0));
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        if(i > 0)
        {
            sp[i] = sp[i-1] + p[i];
        }
        else
        {
            sp[i] = p[i];
        }
    }

    for(int i = 0; i < k; i++)
    {
        scanf("%d", &m[i]);
    }

    for(int i = 0; i < k; i++)
    {
        int j = 0;
        set<pair<int, int>>::iterator rr;
        rr = r.lower_bound(make_pair(m[i], 0));
        rr--;
        j = (*rr).second;
        while(j < n && m[i] >= sp[j])
        {
            j++;
        }
        r.insert(make_pair(m[i], j));
        printf("%d\n", j);
    }
    return 0;
}
