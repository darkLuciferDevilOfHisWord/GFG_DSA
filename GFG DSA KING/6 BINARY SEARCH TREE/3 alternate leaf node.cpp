#include <bits/stdc++.h>
using namespace std;

vector<int>v;
struct Node{
  
  int data;
  Node *left;
  Node *right;
  
};

Node *newNode(int key)
{
    Node *temp=new Node;
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

Node *insertNode(Node *head,int key)
{
    if(head==NULL)
    head=newNode(key);
    else
    {
        if(key<=head->data)
        head->left=insertNode(head->left,key);
        else
        head->right=insertNode(head->right,key);
    }
    return head;
}

void leafSumAlternate(Node *head)
{
  
    if(head==NULL)
        return;
    if(head->left==NULL&&head->right==NULL)
    { 
        v.push_back(head->data);
        return;
        
    }
     leafSumAlternate(head->left);
     leafSumAlternate(head->right);
     return;
}

void sumAlternate()
{
    int sum=0;
     for(int i=0;i<v.size();i=i+2)
     {
         sum+=v[i];
     }
     cout<<sum<<endl;
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    v.clear();
	    Node *root=NULL;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        root=insertNode(root,x);
	    }
	  
	    leafSumAlternate(root);
	    sumAlternate();
	    
	}
	return 0;
}