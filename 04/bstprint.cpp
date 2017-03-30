#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val, TreeNode *left=0, TreeNode *right=0)
        : val(val), left(left), right(right) {}
};

void insert(TreeNode **r, int x)
{
    if(!*r)
    {
        *r = new TreeNode(x);
    }
    else if(x < (*r)->val)
    {
        insert(&((*r)->left), x);
    }
    else if(x > (*r)->val)
    {
        insert(&((*r)->right), x);
    }
}

void print(TreeNode *r, int num)
{
    if(!r)
    {
        return;
    }

    print(r->right, num + 1);

    for(int i = 0; i < num; i++)
    {
        cout << "...";
    }
    cout << "* " << r->val << endl;

    print(r->left, num + 1);
}

int main(void)
{
    int n;
    cin >> n;

    TreeNode *r = NULL;

    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        insert(&r, val);
    }
    
    print(r, 0);
    
    return 0;
}
