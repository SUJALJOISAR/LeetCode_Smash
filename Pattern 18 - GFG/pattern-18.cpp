//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            char ch=64+n;//beacause it is told that if n=1 then start with A,if n=2 then start with B means 
            //ch=65+(n-1) or ch=64+n
            for(int j=0;j<=i;j++)
            {
                cout<<ch<<" ";
                ch--;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends