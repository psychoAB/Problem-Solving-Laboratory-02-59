#include <iostream>

using namespace std;

void r(const char *head, char *tail)
{
    while(tail != head)
    {
        cout << *tail;
        tail--;
    }
    cout << *tail;
}

int main(void)
{
    char x[1001];
    cin >> x;

    char *head, *cur;
    
    head = x;
    cur = head;

    while(*cur != '\0')
    {
        if(*cur == '_')
        {
            r(head, cur - 1);
            cout << *cur;
            head = cur + 1;
        }
        cur++;
    }
    r(head, cur - 1);
    cout << endl;

    return 0;
}
