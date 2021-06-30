int ans=0;
void rec(Node *node,int L,int req){
    if(node==NULL) return ;
    if(L==req) ans++;
    rec(node->left,L+1,req);
    rec(node->right,L+1,req);
}
int Count(Node *node,int L){
    ans=0;
    rec(node,1,L);
    return ans;
}