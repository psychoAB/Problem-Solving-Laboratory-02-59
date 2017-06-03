#include <cstdio>
#include <vector>
#include <set>

using namespace std;

vector<long> r;

int main()
{
    int n;
    scanf("%d", &n);
    while(n != 0)
    {
        multiset<long> b;
        long sum = 0;

        for(int i = 0; i < n; i++)
        {
            long k;
            scanf("%ld", &k);

            for(long j = 0 ; j < k; j++)
            {
                long t;
                scanf("%ld", &t);
                b.insert(t);
            }

            multiset<long>::iterator back;
            back = b.end();
            back--;
            sum += *(back) - *(b.begin());
            b.erase(back);
            b.erase(b.begin());
        }
        r.push_back(sum);
        scanf("%d", &n);
    }

    for(vector<long>::iterator i = r.begin(); i < r.end(); i++)
    {
        printf("%ld\n", *i);
    }

    return 0;
}
