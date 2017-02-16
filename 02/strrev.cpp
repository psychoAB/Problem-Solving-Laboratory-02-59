#include <iostream>

using namespace std;

int main(void)
{
    char x[1001];
    cin >> x;

    char *ptr;
    ptr = x;

    while(*ptr != '\0')
    {
        ptr++;
    }

    ptr--;
    while(ptr != x)
    {
        cout << *ptr;
        ptr--;
    }
    cout << *ptr;
    cout << endl;

    return 0;
}
