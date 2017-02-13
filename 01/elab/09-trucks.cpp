#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> t;
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        int j = 0;
        while(j < t.size())
        {
            if(t[j] + temp <= 1000)
            {
                t[j] += temp;
                break;
            }
            j++;
        }
        if(j == t.size())
        {
            t.push_back(temp);
        }
    }
    cout << t.size() << endl;

    return 0;
}
