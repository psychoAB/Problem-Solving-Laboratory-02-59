#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    for(int line = 1; line <= n; line++)
    {
        for(int space = line; space < n; space++)
        {
            cout << " ";
        }

        for(int star = 0; star < line ; star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
