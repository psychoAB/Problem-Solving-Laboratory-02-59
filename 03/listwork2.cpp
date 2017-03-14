#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int val, ListNode *next = 0)
        : val(val), next(next) {}
};

int main()
{
    ListNode *head;
    head = new ListNode(0);
    
    int m;
    cin >> m;
    
    for(int i = 0; i < m; i++)
    {
        char command;
        int val;
        cin >> command >> val;

        if(command == 'I')
        {
            ListNode *newNode;
            newNode = new ListNode(val);

            newNode->next = head->next;
            head->next = newNode;
            
        }
        else if(command == 'D')
        {
            ListNode *delNode, *prev;
            
            delNode = head;
            prev = head;
            int i = 0;
            while(delNode && i < val)
            {
                prev = delNode;
                delNode = delNode->next;
                i++;
            }
            if(delNode)
            {
                prev->next = delNode->next;
                delete(delNode);
            }
        }
    }
    
    ListNode *cur = head->next;
    while(cur)
    {
        cout << cur->val << endl;
        cur = cur->next;
    }
    return 0;
}
