class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) { 
            return 0;
        }
        
        int x=0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]!=nums[x]) x++;
            nums[x] = nums[i];
        }
        return x+1;
    }
};
