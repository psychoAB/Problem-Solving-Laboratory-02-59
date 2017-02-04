#include <iostream>

using namespace std;

int main(void)
{
    char command[101];
    cin >> command;

    char *ptr = command;
    int x, y;
    x = y = 0;
    while(*ptr != '\0')
    {
        if(*ptr == 'N')
        {
            y += 1;
        }
        else if(*ptr == 'E')
        {
            x += 1;
        }
        else if(*ptr == 'S')
        {
            y -= 1;
        }
        else if(*ptr == 'W')
        {
            x -= 1;
        }
        else
        {
            x = 0;
            y = 0;
        }
        ptr++;
    }
    cout << x << " " << y << endl;

    return 0;
}
