//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // vector<int> ans;
        // deque<int> maxi;
        // for(int i =0;i<k;i++){
        //     while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
        //         maxi.pop_back();
        //     }
        //     maxi.push_back(i);
        // }
        
        // ans.push_back(arr[maxi.front()]);
        
        // for(int i =k;i<n;i++){
            
        //     // removal
        //     while(!maxi.empty() && i - maxi.front() >=k ){
        //         maxi.pop_front();
        //     }
            
            
        //     while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
        //         maxi.pop_back();
        //     }
        //     maxi.push_back(i);
            
        //     ans.push_back(arr[maxi.front()]);
        // }
        
        // return ans;
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(!dq.empty() && dq.front()==i-k)
            dq.pop_front();
            while(!dq.empty() && arr[dq.back()]<arr[i])
            dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)
            ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};

//No of possible Subarrays of size k=N-K
//N=No of elements
//k=window size

//1st approach (Bruteforce)
//make a window and find maximum from that 
//slide the window by one position and then again find the maximum from that
//so for each window we are doing O(k) Operations by searching each and every element
//so Time complexity for searching maximum from each windows are O((N-k)*k) where (N-k) are windows possible if there are n elements
//for(int i=0;i<N-K;i++)
//{
//    for(int j=i+k-1;)
//      {

//      }
//}
//}
//See First of all (Next Greater Element) in Take U forward where we arrange elements in increasing order
//but in this question we will store elements in decreasing order


//2nd approach 
// we will use deqeue
//steps:-1)remove front element and add rear element of deqeue
//2)dequeue always contains elements in descending order.
//3)See we are removing element which is smaller than the element at whose index we have reach
//4)Also those elements which are out of bound are also been removed

//time complexity is O(n) + O(n) approx =O(n) as we are traversing n times so O(n) and also we are removing element so for that also o(n) .
//Space complexity will be O(k) as at last dequeue will store only max k element as we have removed other elements

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends