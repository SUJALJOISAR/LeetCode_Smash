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
            for(int j=0;j<n-1-i;j++)
            {
                cout<<" ";
            }
            
            char ch='A';
            int breakpoint=(2*i+1)/2;
            for(int j=1;j<=2*i+1;j++)
            {
                cout<<ch;
                if(j<=breakpoint) ch++;
                else ch--;
            }
            
            for(int j=0;j<n-1-i;j++)
            {
                cout<<" ";
            }
            
            cout<<endl;
        }
    }
};

// For the character loop, we define the breakpoint till where the character must increase 
// and after that, it must decrease. The breakpoint can be defined by (2*i+1)/2 for each row.

// we can clearly observe that the first row has only the letter A in the middle and some spaces on either side of 
// it and the second row has the letters ABA and some spaces again on both sides. So, we observe from this that 
// first there are some spaces, then letters increasing from A to A + i where i is the row number and then 
// decreasing back to A, then finally some more spaces to the end. Hence, like all the previous patterns the 
// outer loop will loop for N times and there will be three inner loops in this pattern.

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