#include <cstdio>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n;
    map<int, int> l;
    vector<int> r;
    scanf("%d", &n);

    int c;
    int m = 0;
    int cm = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        
        l[c]++;
        if(l[c] >= m)
        {
            cm = c;
            m = l[c];
        }
        r.push_back(cm);
    }

    for(vector<int>::iterator i = r.begin(); i < r.end(); i++)
    {
        printf("%d\n", *i);
    }

    return 0;
}
