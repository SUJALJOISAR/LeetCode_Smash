//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long n) {
        // code here
       long long ans=0;
        for(int i=0;i<32;i++)
        {
             int a =n&1; //doing &n as it will give us the last digit whether it is 1 or 0
             n=n>>1; // right shifting with 1 as to get next integer
            ans=(ans*2)+a; // to convert the number into decimal form we multiply it with 2 and add a
        }
        return ans;//return the integer
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends