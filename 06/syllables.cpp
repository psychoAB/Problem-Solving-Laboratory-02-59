#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    int n;
    char text[100];
    char *ptr;
    int c;
    vector<int> result;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        c = 0;
        scanf("%s", text);
        
        ptr = text;
        while(*ptr)
        {
            if(strspn(ptr, "aeiou"))
            {
                c++;
                ptr++;
                while(strspn(ptr, "aeiou"))
                {
                    ptr++;
                }
            }
            else
            {
                ptr++;
            }
        }
        result.push_back(c);
    }
    
    for(vector<int>::iterator i = result.begin(); i < result.end(); i++)
    {
        printf("%d\n", *i);
    }
    return 0;
}
