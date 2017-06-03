#include <cstdio>
#include <vector>
#include <set>

using namespace std;

vector<int> r;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    while(n != 0 || m != 0)
    {
        set<int> a;
        vector<int> b;
        int t;
        int cd = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &t);
            a.insert(t);
        }
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &t);
            b.push_back(t);
        }
        for(int i = 0; i < m; i++)
        {
            set<int>::iterator p;
            p = a.find(b[i]);
            if(p != a.end())
            {
                cd++;
            }
        }
        r.push_back(cd);
        scanf("%d %d", &n, &m);
    }

    for(vector<int>::iterator i = r.begin(); i < r.end(); i++)
    {
        printf("%d\n", *i);
    }
    return 0;
}
