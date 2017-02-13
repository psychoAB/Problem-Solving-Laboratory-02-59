#include <iostream>

using namespace std;

int main(void)
{
    char c[101];
    cin >> c;
    
    char *ptr;
    ptr = c;
    while(*ptr != '\0')
    {
        char x = *ptr;
        for(int i = 0; i < 4; i++)
        {
            x++;
            if(x > 'z')
            {
                x = 'a';
            }
        }
        cout << x;
        ptr++;
    }
    cout << endl;

    return 0;
}
