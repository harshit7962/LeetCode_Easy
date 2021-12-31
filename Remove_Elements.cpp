class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int fast=0, slow=0;
        do {
            slow = arr[slow];
            fast = arr[arr[fast]];
        } while(fast!=slow);
        
        slow = 0;
        while(slow!=fast) {
            slow = arr[slow];
            fast = arr[fast];
        }
        return fast;
    }
};
