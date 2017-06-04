#include <cstdio>
#include <cstring>

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int val, ListNode *next = 0)
        : val(val), next(next) {}
};

void n(ListNode *head, int v)
{
    ListNode *c;
    c = head;
    while(c->next != NULL)
    {
        c = c->next;
    }
    c->next = new ListNode(v);
}

void mo(ListNode *a, ListNode *b)
{
    ListNode *c;
    c = b;
    while(c->next != NULL)
    {
        c = c->next;
    }
    c->next = a->next;
    a->next = NULL;
}

int main()
{
    ListNode *head[100000];
    for(int i = 0; i < 100000; i++)
    {
        head[i] = new ListNode(0);
    }
    int m;
    scanf("%d", &m);
    
    for(int i = 0; i < m; i++)
    {
        char c[100];
        int a, b;
        scanf("%s", c);

        scanf("%d %d", &a, &b);
        
        if(c[0] == 'N')
        {
            n(head[b - 1], a);
        }
        else if(c[0] == 'M')
        {
            mo(head[a - 1], head[b - 1]);
        }
    }

    for(int i = 0; i < 100000; i++)
    {
        ListNode *x = head[i];
        while(x != NULL)
        {
            if(x != head[i])
            {
                printf("%d\n", x->val);
            }
            x = x->next;
        }
    }
    return 0;
}
