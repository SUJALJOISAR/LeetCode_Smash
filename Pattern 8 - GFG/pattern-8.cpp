//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            cout<<" ";
	        }
	        
	        for(int j=0; j<(2*n) - (2*i+1);j++)
	        {
	             cout<<"*";
	        }
	        
	         for(int j=0;j<i;j++)
	        {
	            cout<<" ";
	        }
	        
	        cout<<endl;
	    }
	}
};



    //space  stars space
    //  0     9      0
    //  1     7      1
    //  2     5      2
    //  3     3      3
    //  4     1      4
    
    //see space will be simple to apply
    // it will just start from j=0 and always it will be j<i condition
    //for stars it will be (2*n) - (2*i+1) 


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