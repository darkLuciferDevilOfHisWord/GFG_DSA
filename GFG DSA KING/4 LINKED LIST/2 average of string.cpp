#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    int sum=0;
	    for(int i=0;i<s.length();i++)
	    {
	        sum+=(int)(s[i]);
	    }
	    int average=floor(sum/s.length());
	    cout<<average<<endl;
	}
	return 0;
}