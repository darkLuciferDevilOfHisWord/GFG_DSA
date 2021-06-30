#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        long long n;
        cin>>n;
        int numberOfBits=1+floor(log2(n)); 
        
        if(numberOfBits%2!=0) 
        {
            n=n^(1<<(numberOfBits/2)); 
        }
        else 
        {
            n=n^(1<<(numberOfBits/2));
            n=n^(1<<((numberOfBits/2)-1));
        }
        
        cout<<n<<endl;
        
    }
	return 0;
}