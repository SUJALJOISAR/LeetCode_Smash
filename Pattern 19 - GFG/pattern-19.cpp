//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space=0;
        //upper half triangle
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n-i;j++)//first there will be n stars,then n-1 and so on.
            {
                cout<<"*";
            }
            
            for(int j=0;j<space;j++)
            {
                cout<<" ";
            }
            
             for(int j=1;j<=n-i;j++)//first there will be n stars,then n-1 and so on.
            {
                cout<<"*";
            }
            
            space+=2;
            
            cout<<endl;
        }
        
        //lower half triangle
        int space2=2*n-2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
            
            for(int j=0;j<space2;j++)
            {
                cout<<" ";
            }
            
            for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
            
            space2-=2;
            cout<<endl;
        }
    }
};

// Contrary to the previous patterns, this pattern observes symmetry. We can clearly see that the first half of the 
// pattern is just a mirror image of the second half of the pattern. If we observe the first part, we see that like 
// some previous patterns, it can also be divided into 3 parts i.e. stars, spaces, and then stars. In the first row, 
// there are no spaces and 10 stars, in the second row, there are 2 spaces and 8 stars, and so on. So, we initialize 
// the spaces with 0 initially which will eventually increment by 2 whenever we enter a new row. The stars, however, 
// will be twice the row number, half of the stars would be printed before the spaces and half after the spaces.
// Similar will be the case of the second half of the pattern too. The initial number of spaces would be equal to 
// 2*(N-1) and 1 star each would be printed on either side of the spaces initially. The spaces will decrease by 2 
// and the stars will increase by 2 in each row.

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