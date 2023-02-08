class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int ans=0,profit=0,minVal=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            profit=prices[i]-minVal;
            ans=max(profit,ans);
             minVal=min(minVal,prices[i]);
        }
    return ans;
    }
};

 

        // int minVal = prices[0], profit = 0;
    //     for (int i = 1; i < prices.size(); i++) {
    //         profit = max (profit, prices[i] - minVal);
    //         minVal = min (minVal, prices[i]);
