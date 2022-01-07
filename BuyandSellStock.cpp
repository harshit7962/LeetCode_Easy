class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0], res=0;
        for(int i=1;i<prices.size();i++) {
            if(mn>prices[i]) {
                mn = prices[i];
            } else {
                res = max(res, prices[i]-mn);
            }
        }
        return res;
    }
};
