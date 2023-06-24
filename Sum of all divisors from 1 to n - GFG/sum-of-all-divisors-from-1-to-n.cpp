//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int n)
    {
        long long sum = 0;
     
        for (int i = 1; i <= n; ++i)
            sum += (n / i) * i;
        
        return sum;
    }
    
    //means see if we have to find all the multiples of individual numbers from 1 to n
    // long long ans=0,sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     //now find the multiples of i
    //     for(int j=1;j<=i;j++)
    //     {
    //         if(i%j==0) sum+=j;
    //     }
        
    //     ans+=sum;
    //     sum=0;
    // }
    // return ans;
    // }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends