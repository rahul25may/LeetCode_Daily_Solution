string tree2str(TreeNode* root) {
        string res = dfs(root);
        return res;
    }
    string dfs(TreeNode *t)
    {
        if (t == NULL)
        {
            return "";
        }
        string tmp = to_string(t->val);

        if (t->left == NULL && t->right == NULL)
        {
            tmp = tmp;
        }
        else if (t->right == NULL)
        {
            tmp = tmp + "(" + dfs(t->left) + ")" + dfs(t->right);
        }
        else
        {
            tmp = tmp + "(" + dfs(t->left) + ")(" + dfs(t->right) + ")";
        }

        return tmp;
    }
