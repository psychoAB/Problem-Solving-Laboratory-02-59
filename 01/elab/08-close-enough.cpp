#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int n;
    int l;
    cin >> n >> l;
    int h[n];
    for(int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int dis = abs(h[i] - h[j]);
            if(dis <= l)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
