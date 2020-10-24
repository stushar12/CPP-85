vector<int> abc(Node *root,vector<int> &v)
{
    if(root!=NULL)
    {
        abc(root->left,v);
        v.push_back(root->data);
        abc(root->right,v);
    }
    else
    {
        return v;
    }
    return v;
}
bool isBST(Node* root) 
{
 vector<int> v;
 v=abc(root,v);
 for(int i=1;i<v.size();i++)
 {
     if(v[i]>v[i-1])
     {
         continue;
     }
     else
     return false;
 }
 return true;
}