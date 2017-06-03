#include <cstdio>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

vector<int> r;

int ctoi(char c)
{
    return (int)c - 65;
}

int ftran(char *c)
{
    return ctoi(c[0]) * (int)pow(26, 2) + ctoi(c[1]) * 26 + ctoi(c[2]);
}

int stran(char *c)
{
    char x[4];
    for(int i = 0; i < 4; i++)
    {
        x[i] = c[4 + i];
    }
    return atoi(x);
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char c[10];
        
        scanf("%s", c);

        int a, b;
        a = ftran(c);
        b = stran(c);

        r.push_back(abs(a - b) <= 100);
    }

    for(int i = 0; i < n; i++)
    {
        if(r[i])
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
    }
    return 0;
}
