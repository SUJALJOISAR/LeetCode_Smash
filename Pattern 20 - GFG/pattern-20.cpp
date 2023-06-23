//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        //upper traingle
        // int space=2*n-2;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<=i;j++)
        //     {
        //         cout<<"*";
        //     }
            
        //     for(int j=0;j<space;j++)
        //     {
        //         cout<<" ";
        //     }
            
        //      for(int j=0;j<=i;j++)
        //     {
        //         cout<<"*";
        //     }
            
        //     cout<<endl;
        //     space-=2;
        // }
        
        //lower traingle
        // int space2=2;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=1;j<=n-i-1;j++)
        //     {
        //         cout<<"*";
        //     }
            
        //     for(int j=0;j<space2;j++)
        //     {
        //         cout<<" ";
        //     }
            
        //     for(int j=1;j<=n-i-1;j++)
        //     {
        //         cout<<"*";
        //     }
            
        //     cout<<endl;
        //     space2+=2;
            
        // }
        
        int space=2*n-2;
        for(int i=1;i<=2*n-1;i++){//main outer loop
            
            int stars=i;//stars increase in first half triangle
            
            if(i>n) stars=(2*n) -i;//stars decrease in second half triangle
            
            for(int j=1;j<=stars;j++)
            {
                cout<<"*";
            }
            
            for(int j=1;j<=space;j++)
            {
                cout<<" ";
            }
            
            for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          
          cout<<endl;
          
          if(i<n) space -=2;
          else space +=2;
        }
    }
};

//see the commented solution is perfect for n=5 but not for other n so follow this pattern

// In this problem, we have to print a butterfly-like star pattern. This pattern is very similar to Pattern 10 in 
// this series as here we can see that for Row 1 we have 2 stars, and 8 spaces, and for Row 2 we have 4 stars and 
// 6 spaces, and so on. Also, after the nth row, the stars decrease and the spaces increase. So, the outer loop 
// will run for 2*n -1 times ( n times when spaces > stars and then n-1 when stars > spaces ). There will be 3 
// inner loops, one to print stars, then spaces, and then again stars. Spaces will decrement by 2 as i increases 
// and when i reaches n, then spaces decrement by 2 every time we enter a new row. When i<n, the stars printed in 
// each row are 2*i, and as soon as i>n, the stars in each row would be twice of 2*n-i.

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