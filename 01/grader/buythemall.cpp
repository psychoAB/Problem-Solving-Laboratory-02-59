#include <iostream>

using namespace std;

int main(void)
{
    int price[3];
    int n;
    for(int i = 0; i < 3; i++)
    {
        cin >> price[i];
    }
    cin >> n;
    int sum_price[3];
    for(int i = 0; i < 3; i++)
    {
        sum_price[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp--;
        sum_price[temp] += price[temp];
    }

    int min = sum_price[0];
    for(int i = 1; i < 3; i++)
    {
        if(sum_price[i] < min)
        {
            min = sum_price[i];
        } 
    }
    cout << min << endl;

    return 0;
}
