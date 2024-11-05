/*
    Problem Link : https://www.naukri.com/code360/problems/all-root-to-leaf-paths-in-binary-tree._983599?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

void getAllPath(BinaryTreeNode<int> *root, vector<string> &v, string str)
{
    if (root == NULL)
        return;

    str += to_string(root->data);

    if (!root->left and !root->right)
    {
        v.push_back(str);
    }
    else
    {
        str += " ";
        getAllPath(root->left, v, str);
        getAllPath(root->right, v, str);
    }
    str.pop_back();
}

vector<string> allRootToLeaf(BinaryTreeNode<int> *root)
{
    vector<string> v;
    string str;
    if (root == NULL)
        return v;

    getAllPath(root, v, str);

    return v;
}