class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    string rs = s;
        for(int i =0; i < indices.size(); ++i)
            rs[indices[i]] = s[i];
        return rs;
    }
};

//    string rs;
    //    for(int i=0;i<indices.size();i++)
    //    {
    //        rs[i]=s[indices[i]];
    //    }
    //    return rs;
