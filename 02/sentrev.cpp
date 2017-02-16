#include <iostream>

using namespace std;

void p(char *ptr, const char *t)
{
    while(ptr != t)
    {
        cout << *ptr;
        ptr++;
    }
    cout << *ptr;
}

int main(void)
{
    char x[1001];
    cin >> x;
    
    char *ptr, *t;
    ptr = x;

    while(*ptr != '\0')
    {
        ptr++;
    }
    ptr--;
    t = ptr;

    while(ptr != x)
    {
        if(*ptr == '_')
        {
            p(ptr + 1, t);
            cout << *ptr;
            t = ptr - 1;
        }
        ptr--;
    }
    p(ptr, t);
    cout << endl;

    return 0;
}
