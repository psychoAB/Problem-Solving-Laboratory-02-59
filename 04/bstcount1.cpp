#include <cstdio>

using namespace std;

struct TreeNode
{
    int val;
    int count;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val, int count=0, TreeNode *left=0, TreeNode *right=0)
        : val(val), count(count), left(left), right(right) {}
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
        (*r)->count = (*r)->count + 1;
    }
}

int count(TreeNode *r, int val, int old)
{
    if(!r)
    {
        return old;
    }
    else if(r->val > val)
    {
        old += 1 + r->count;
        return count(r->left, val, old);
    }
    else if(r->val == val)
    {
        old += r->count;
        return old;
    }
    else
    {
        return count(r->right, val, old);
    }
}

int main(void)
{
    int m;
    scanf("%d", &m);

    TreeNode *r = NULL;

    int result[m];
    int index_result = 0;

    for(int i = 0; i < m; i++)
    {
        int k, val;
        scanf("%d %d", &k, &val);

        if(k == 1)
        {
            insert(&r, val);
        }
        else
        {
            result[index_result] = count(r, val, 0);
            index_result++;
        }
    }

    for(int i = 0; i < index_result; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}
