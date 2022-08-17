void inorder(Node* root, map<int, queue<Node*>*>& m, int line){
    if(!root)
        return;
    
    queue<Node*>* q;
    m[line] = q;
    
    if(root->left)
        inorder(root->left, m, line+1);
        
    
    queue<Node*>* temp;
    temp = m[line];
    // cout<<typeid(temp).name();
    (*temp).push(root->data);
    m[line] = temp;
    
    if(root->right)
        inorder(root->right, m, line);
        
}

vector<int> diagonal(Node *root)
{
    map<int, queue<Node*>*> m;
    inorder(root, m, 0);
    
    vector<int> v;
    return v;
