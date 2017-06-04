#include <cstdio>
#include <cstring>
#include <cmath>

int main()
{
    char c[2000];
    char *p;
    scanf("%s", c);
    p = c;
    int x = 1;
    while(*p != '\0')
    {
        if(*p == ',')
        {
            x++;
        }
        p++;
    }

    if(strlen(c) == 2 && x == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("%ld\n", (long)pow(2, x));
    }
    return 0;
}
