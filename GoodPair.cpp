class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        map<int, int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int res=0;
        for(int i=0;i<nums.size();i++) {
            if(mp[nums[i]]) {
                res+=--mp[nums[i]];
            }
        }
        return res;
    }
};
