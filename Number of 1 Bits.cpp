class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint cnt=0;
        while(n)
        {
                if(n&1)
                {
                    cnt++;
                }
                n=n>>1;
        }
        return cnt;
    }
};
