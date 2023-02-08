// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         for(int i=0;i<n;i+=2)
//         {
//             int t=nums[i+1];
//             nums[i+1]=nums[i+n];
//             nums[i+n]=t;
//         }
       
//         return nums;
//     }
// };

 class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for ( int i = 0; i < n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};


