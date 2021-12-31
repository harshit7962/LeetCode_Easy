class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==1) {
            return 1;
        }
        int n=s.length()-1;
        while(s[n]==' ') {
            n--;
        }
        int res=0;
        while(n>=0 && s[n]!=' ') {
            res++;
            n--;
        }
        return res;
    }
};
