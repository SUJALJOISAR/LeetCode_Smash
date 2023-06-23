//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            // for(int j=0;j<=i;j++)
            // {
            //     cout<<"*";
            // }
            // cout<<endl;
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            
            for(int j=0;j<=i;j++)
            {
                cout<<"* ";
            }
            
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            
            cout<<endl;
        }
        invert(n);
    }
    
    void invert(int n)
    {
        int space=0;
        for(int i=n; i>0; i--)
        {
            for(int j=0;j<space;j++)
            {
                cout<<" ";
            }
            
            for(int j=0;j<i;j++)
            {
                cout<<"* ";
            }
            space++;
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends