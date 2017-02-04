#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    int a, b;
    char sign;
    cin >> a;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> sign;
        cin >> b;

        if(sign == '+')
        {
            a += b;
        }
        else
        {
            a -= b;
        }
    }
    cout << a << endl;

    return 0;
}
