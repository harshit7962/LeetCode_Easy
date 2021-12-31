class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        while(i>=0 && digits[i]==9) {
            digits[i--]=0;
        }
        if(i>-1) {
            digits[i]=digits[i]+1;
            return digits;
        }
        vector<int> x(digits.size()+1, 0);
        x[0]=1;
        return x;
    }
};
