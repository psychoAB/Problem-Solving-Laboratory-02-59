#include <iostream>

using namespace std;

bool is_prime(int number)
{
    if(number <= 1)
    {
        return false;
    }
    for(int i = 2; i < number; i++)
    {
        if(!(number % i))
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int x;
    
    cin >> x;
    int i = x + 1;
    while(!is_prime(i))
    {
        i++;
    }
    cout << i << endl;

    return 0;
}
