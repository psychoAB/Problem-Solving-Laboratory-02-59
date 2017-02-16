#include <iostream>

using namespace std;

int main(void)
{
    char text[101];
    char *ptr;

    cin >> text;

    ptr = text;
    while(*ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            cout << (char)(*ptr - 32);
        }
        else
        {
            cout << *ptr;
        }
        ptr++;
    }

    return 0;
}
