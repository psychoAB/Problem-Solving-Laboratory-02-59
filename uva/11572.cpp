#include <cstdio>
#include <set>
#include <vector>

using namespace std;

vector<long> r;
vector<long> x;

vector<long>::iterator f(long n)
{
    for(vector<long>::iterator i = x.begin(); i < x.end(); i++)
    {
        if(*i == n)
        {
            return i;
        }
    }
    return x.end();
}

int main()
{
    long c;
    scanf("%ld", &c);
    for(long i = 0; i < c; i++)
    {
        long n;
        scanf("%ld", &n);

        //set<long> x;

        long max = 0;

        for(long j = 0; j < n; j++)
        {
            long t;
            scanf("%ld", &t);
            
            //set<long>::iterator p = x.find(t);
            vector<long>::iterator p = f(t);
            
            if(p == x.end())
            {
                x.push_back(t);
            }
            else
            {
                if(max < x.size())
                {
                    max = x.size();
                }
                x.erase(x.begin(), ++p);
                x.push_back(t);
            }
        }
        if(max < x.size())
        {
            max = x.size();
        }
        x.clear();
        r.push_back(max);
    }

    for(long i = 0; i < c; i++)
    {
        printf("%ld\n", r[i]);
    }
    return 0;
}
