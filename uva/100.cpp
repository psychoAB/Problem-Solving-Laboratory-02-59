#include <cstdio>
#include <set>
#include <vector>
#include <map>

using namespace std;

vector<pair<int, int>> ra;
map<pair<int, int>, int> rb;

int f(int n, int s)
{
    if(n <= 1)
    {
        return s;
    }
    if(n % 2)
    {
        return f(3 * n + 1, s + 1);
    }
    else
    {
        return f(n / 2, s + 1);
    }
    return s;
}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        int s = 0;
        int max = 0;
        pair<int , int> t = make_pair(a, b);
        if(a > b)
        {
            int xxx = a;
            a = b;
            b = xxx;
        }
        ra.push_back(t);
        for(int i = a; i <= b; i++)
        {
            s = f(i, 1);
            if(s > max)
            {
                max = s;
            }
        }
        rb[t] = max;
    }

    for(vector<pair<int, int>>::iterator i = ra.begin(); i < ra.end(); i++)
    {
        printf("%d %d %d\n", (*i).first, (*i).second, rb[*i]);
    }
    
    return 0;
}
