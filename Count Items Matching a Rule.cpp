class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt=0;
       for(int i=0;i<items.size();i++)// for(auto vec:items)
        {
                if(ruleKey=="type" && ruleValue==items[i][0])
                cnt++;
                else if(ruleKey=="color" && ruleValue==items[i][1])
                cnt++;
                else if(ruleKey=="name" && ruleValue==items[i][2])
                cnt++;
        }
        return cnt;
    }
};

//in python
// class Solution:
//     def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
//         count=0
//         if ruleKey=="type":
//             for i in range(len(items)):
//                 if ruleValue==items[i][0]:
//                     count+=1
//         if ruleKey=="color":
//             for i in range(len(items)):
//                 if ruleValue==items[i][1]:
//                     count+=1
//         if ruleKey=="name":
//             for i in range(len(items)):
//                 if ruleValue==items[i][2]:
//                     count+=1
//         return count
        
