class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) {
            return 0;
        }
        int temp=nums.size()-1, k=0;
        while(nums[temp]==val) {
            temp--;
            if(temp<0) {
                return k;
            }
        }
        for(int i=0;i<=temp;i++) {
            if(nums[i]==val) {
                nums[i] = nums[temp--];
            }
            k++;
            while(val==nums[temp]) {
                temp--;
            }
        }
        return k;
    }
};
