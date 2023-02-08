class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.insert(ans.begin()+index[i],nums[i]);
        }
        return ans;
    }
};

// vector<int> tararr;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             tararr.emplace_back(tararr.begin()+index[i],nums[i]);
//         }
//         return tararr;
