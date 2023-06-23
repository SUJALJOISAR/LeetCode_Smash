//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int N) {
        // initial no. of spaces in row 1.
      int spaces = 2*(N-1);
      
      // Outer loop for the number of rows.
      for(int i=1;i<=N;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j<<" ";
          }
          
          // for printing spaces in each row
          for(int j = 0;j<=spaces;j++){
              cout<<"  ";
          }
          
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j<<" ";
          }
          
          // As soon as the numbers for each iteration are printed, we move to the
          // next row and give a line break otherwise all numbers
          // would get printed in 1 line.
          cout<<endl;
          
          // After each iteration nos. increase by 2, thus
          // spaces will decrement by 2.
          spaces-=2;
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