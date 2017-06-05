#include <cstdio>
#include <vector>

using namespace std;

vector<int> r;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        r.push_back(a ^ b);
    }

    for(vector<int>::iterator i = r.begin(); i < r.end(); i++)
    {
        printf("%d\n", *i);
    }
}
