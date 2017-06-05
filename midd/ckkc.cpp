#include <cstdio>
#include <set>

using namespace std;

int main()
{
    int x;
    scanf("%d", &x);

    set<int> a;
    int t;
    do
    {
        scanf("%d", &t);
        
        a.insert(t);
    }while(t);

    int r = 1;
    for(int i = 2559; i <= x; i++)
    {
        set<int>::iterator p = a.find(i);

        if(p == a.end())
        {
            r = !r;
        }
    }

    if(r)
    {
        printf("K\n");
    }
    else
    {
        printf("C\n");
    }
    
    return 0;
}
