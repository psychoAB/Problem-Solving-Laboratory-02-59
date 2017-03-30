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
