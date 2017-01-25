#include <iostream>

using namespace std;

int main(void)
{
    int a,b,i;

    cin >> a >> b;
    if(a > b)
    {
        i = a;
    }
    else
    {
        i = b;
    }

    while(!(b % i == 0 && a % i == 0 || i < 1))
    {
        i--;
    }
    a /= i;
    b /= i;
    
    cout << a << "/" << b << endl;
    return 0;
}
