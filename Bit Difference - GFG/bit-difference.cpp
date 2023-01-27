//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++
class Solution{
public:
    const int mod=1e9+7;
    int countBits(int n, long long int a[]){
        // code here
        int ans=0;
        for(int i=0;i<32;i++){
            int cntsetbit=0;
            for(int j=0;j<n;j++){
                if(a[j] & (1<<i))
                    cntsetbit++;
            }
            int cntunsetbit=n-cntsetbit;
            ans=(ans+(2ll*cntunsetbit*cntsetbit)%mod)%mod;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends