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

int find(TreeNode *r, int x)
{
    if(!r)
    {
        return 0;
    }
    else if(x == r->val)
    {
        return 1;
    }
    else if(x < r->val)
    {
        return find(r->left, x);
    }
    else if(x > r->val)
    {
        return find(r->right, x);
    }
    return 0;
}

int main(void)
{
    int m;
    cin >> m;

    TreeNode *r = NULL;

    int result[m];
    int index_result = 0;

    for(int i = 0; i < m; i++)
    {
        int k, val;
        cin >> k >> val;

        if(k == 1)
        {
            insert(&r, val);
        }
        else
        {
            result[index_result] = find(r, val);
            index_result++;
        }
    }

    for(int i = 0; i < index_result; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
