//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		long int r=0,ans=0,num=n;
        if(n<0)
        return "No";
        else
        {
        while(n>0)
        {
            r=n%10;
            ans=(ans*10)+r;
            n=n/10;
        }
        if(ans==num)
        return "Yes";
        else
        return "No";
    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends