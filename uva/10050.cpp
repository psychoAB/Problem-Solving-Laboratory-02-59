#include <cstdio>
#include <vector>

using namespace std;

vector<int> r;

int main()
{
    int c;
    scanf("%d", &c);
    for(int i = 0; i < c; i++)
    {
        int d, p;
        int h = 0;
        scanf("%d", &d);
        scanf("%d", &p);

        int x[p];

        for(int j = 0 ; j < p; j++)
        {
            int t;
            scanf("%d", &t);

            x[j] = t;
        }

        for(int j = 1; j <= d; j++)
        {
            if(!((j % 7) == 0 || (j % 7) == 6))
            {
                for(int k = 0 ; k < p; k++)
                {
                    if(!(j % x[k]))
                    {
                        h++;
                        break;
                    }
                }
            }
        }
        r.push_back(h);
    }

    for(int i = 0; i < c; i++)
    {
        printf("%d\n", r[i]);
    }
    return 0;
}
