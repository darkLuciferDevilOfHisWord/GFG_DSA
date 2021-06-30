#include <bits/stdc++.h>
using namespace std;
int mat[901][901]; 
int rows[901]={0}; 
int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int m;
	    cin>>m;
	    int n;
	    cin>>n;
	    
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	            cin>>mat[i][j];
	   for(int i=0;i<m;i++)
	   {
	       for(int j=0;j<n;j++)
	       {
	           if(mat[i][j]==1)
	            rows[i]=1;
	       }
	   }
	   for(int i=0;i<m;i++)
	   {
	       for(int j=0;j<n;j++)
	       {
	           if(rows[i]==1) 
	           mat[i][j]=1; 
	       }
	   }
	   for(int i=0;i<m;i++)
	   {
	       for(int j=0;j<n;j++)
	       {
	           cout<<mat[i][j]<<" "; 
	       }
	       cout<<endl;
	   }
	  memset(rows,0,sizeof(rows));
	}
	return 0;
}