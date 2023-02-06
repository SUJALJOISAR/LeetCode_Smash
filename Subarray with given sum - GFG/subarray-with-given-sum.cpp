//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
    //     int sum;
    //     vector<int> vec;
    //     vector<int> k;
    //     k.emplace_back(-1);
    //     for(int i=0;i<n;i++)
    //     {
    //         sum=0;
    //         for(int j=i;j<n;j++)
    //         {
    //             sum+=arr[j];
    //             if(sum==s)
    //             {
    //                 int start=i+1;
    //                 int end=j+1;
    //                 vec.emplace_back(start);
    //                 vec.emplace_back(end);
    //                 break;
    //             }
    //             else if(sum>s)
    //             break;
    //         }
    //         if(sum==s)
    //         break;
    //     }
    //     if(sum==0)
    //     return k;
    //     else 
    //   return vec;
    vector<int>ans;
        int i=0,j=0,sum=0;
        while(i<n&&j<=n)
        {
            if(sum<s)
            {
                sum+=arr[j++];
            }
            else if(sum>s)
            {
                sum-=arr[i++];
            }
            else if(s==0)
            return {-1};
            else if(sum==s)
            {
                return {i+1,j};
                
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends