#include <cstdio>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int m;
    map<int, int> s;
    vector<int> r;
    scanf("%d", &m);

    int cm;
    int t;
    int q;
    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &cm, &t);
        
        if(cm == 1)
        {
            scanf("%d", &q);

            s[t] += q;
        }
        else if(cm == 2)
        {
            r.push_back(s[t]);
        }
        else if(cm == 3)
        {
            int qq;
            scanf("%d", &q);

            qq = s[t];
            if(q > qq)
            {
                r.push_back(qq);
                s[t] = 0;
            }
            else
            {
                r.push_back(q);
                s[t] -= q;
            }
        }
    }

    for(vector<int>::iterator i = r.begin(); i < r.end(); i++)
    {
        printf("%d\n", *i);
    }

    return 0;
}
