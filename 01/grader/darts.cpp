#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    
    cin >> n;
    int darts[n][2];
    for(int i = 0; i < n; i++)
    {
        cin >> darts[i][0] >> darts[i][1];
    }

    int point = 0;
    for(int i = 0; i < n; i++)
    {
        double distance = 0;
        distance = sqrt(pow(darts[i][0], 2) + pow(darts[i][1], 2));
        if(distance > 10)
        {
            point += 0;
        }
        else if(distance > 8)
        {
            point += 1;
        }
        else if(distance > 6)
        {
            point += 2;
        }
        else if(distance > 4)
        {
            point += 3;
        }
        else if(distance > 2)
        {
            point += 4;
        }
        else
        {
            point += 5;
        }
    }
    cout << point << endl;

    return 0;
}
