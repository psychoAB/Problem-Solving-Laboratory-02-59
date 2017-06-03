#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <map>

using namespace std;

vector<int> k;
map<int, int> m;

int main()
{
    char s[1000000];
    char *p;
    while(scanf("%s", s) != EOF)
    {
        p = strtok(s, " ");
        while(p != NULL)
        {
            int x;
            x = atoi(p);

            map<int, int>::iterator i;
            i = m.find(x);
            if(i == m.end())
            {
                k.push_back(x);
                m[x] = 1;
            }
            else
            {
                m[x]++;
            }

            p = strtok(NULL, " ");
        }
    }

    for(vector<int>::iterator i = k.begin(); i < k.end(); i++)
    {
        printf("%d %d\n", *i, m[*i]);
    }

    return 0;
}
