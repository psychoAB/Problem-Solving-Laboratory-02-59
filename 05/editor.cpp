#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<char*> text;
    vector<char*>::iterator cur;

    char cm;
    char word[200000][20];
    cin >> n;
    cur = text.begin();
    for(int i = 0; i < n; i++)
    {
        cin >> cm;

        if(cm == 'i')
        {
            cin >> word[i];
            cur = text.insert(cur, word[i]);
            cur++;
        }
        else if(cm == 'l')
        {
            if(cur > text.begin())
            {
                cur--;
            }
        }
        else if(cm == 'r')
        {
            if(cur < text.end())
            {
                cur++;
            }
        }
        else if(cm == 'b')
        {
            if(cur != text.begin())
            {
                cur = text.erase(--cur);
            }
        }
        else if(cm == 'd')
        {
            if(cur != text.end())
            {
                cur = text.erase(cur);
            }
        }
    }
    
    cur = text.begin();
    while(cur != text.end())
    {
        if(cur == text.end() - 1)
        {
            cout << *cur;
        }
        else
        {
            cout << *cur << " ";
        }
        cur++;
    }

    return 0;
}
