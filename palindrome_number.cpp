class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int d=x, b=0;
        while(x) {
            b=b*10+x%10;
            x/=10;
        }
        return d==b;
    }
};
