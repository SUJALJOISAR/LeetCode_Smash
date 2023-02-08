class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ra;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ra.emplace_back(nums[i]);
            }
        }
        return ra;
    }
};
