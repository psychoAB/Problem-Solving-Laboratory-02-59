#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int value = 0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        
        if(temp > 0)
        {
            value += temp;
        }
    }
    cout << value << endl;

    return 0;
}
