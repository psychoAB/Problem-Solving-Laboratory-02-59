#include <iostream>

using namespace std;

int main(void)
{
    char command[101];
    cin >> command;
    char face = 'N';

    char *ptr = command;
    while(*ptr != '\0')
    {
        if(*ptr == 'Z')
        {
            face = 'N';
            cout << 'Z';
            ptr++;
        }
        else if(face != *ptr)
        {
            cout << 'R';
            if(face == 'N')
            {
                face = 'E';
            }
            else if(face == 'E')
            {
                face = 'S';
            }
            else if(face == 'S')
            {
                face = 'W';
            }
            else
            {
                face = 'N';
            }
        }
        else
        {
            cout << 'F';
            ptr++;
        }
    }
    cout << endl;

    return 0;
}
