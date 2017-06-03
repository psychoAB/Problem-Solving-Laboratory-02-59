#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

vector<int> r;

int main()
{
    int t;
    scanf("%d", &t);

    for(int i  = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);
        
        x *= 567;
        x /= 9;
        x += 7492;
        x *= 235;
        x /= 47;
        x -= 498;

        int y;
        y = abs(x);
        string c = to_string(y);
        
        string::iterator p = c.end();
        p--;
        p--;
        r.push_back(*p - 48);
    }

    for(int i = 0; i < t; i++)
    {
        printf("%d\n", r[i]);
    }
    return 0;
}
