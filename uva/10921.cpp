#include <cstdio>
#include <cstring>
#include <map>

using namespace std;

map<int, char *> r;

int main()
{
    int i = 0;

    char *c = (char *)malloc(100 * sizeof(char));

    while(scanf("%s", c) != EOF)
    {
        r[i] = c;

        for(int j = 0; j < strlen(c); j++)
        {
            if((int)c[j] >= 65 && (int)c[j] <= 67)
            {
                c[j] = '2';
            }
            else if((int)c[j] >= 68 && (int)c[j] <= 70)
            {
                c[j] = '3';
            }
            else if((int)c[j] >= 71 && (int)c[j] <= 73)
            {
                c[j] = '4';
            }
            else if((int)c[j] >= 74 && (int)c[j] <= 76)
            {
                c[j] = '5';
            }
            else if((int)c[j] >= 77 && (int)c[j] <= 79)
            {
                c[j] = '6';
            }
            else if((int)c[j] >= 80 && (int)c[j] <= 83)
            {
                c[j] = '7';
            }
            else if((int)c[j] >= 84 && (int)c[j] <= 86)
            {
                c[j] = '8';
            }
            else if((int)c[j] >= 87 && (int)c[j] <= 90)
            {
                c[j] = '9';
            }
        }
        i++;
        c = (char *)malloc(100 * sizeof(char));
    }

    for(int j = 0; j < i; j++)
    {
        printf("%s\n", r[j]);
    }
    return 0;
}
