class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for(int i=0;i<nums.size();i++) {
            auto fnd=mp.find(target-nums[i]);
            if(fnd!=mp.end()) return {fnd->second, i};
            else mp.insert({nums[i], i});
        }
        return {-1,-1};
    }
};
