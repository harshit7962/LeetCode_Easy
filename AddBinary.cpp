class Solution {
public:
    string addBinary(string a, string b) {
        string curr="";
        int carry=0, i=a.length()-1, j=b.length()-1;
        while(i>=0 || j>=0) {
            if(j<0) {
                j=0;
                b[j]='0';
            } else if (i<0) {
                i=0;
                a[i]='0';
            }
            if(carry==1 && a[i]=='1' && b[j]=='1') {
                curr = "1" + curr;
                carry=1;
            } else if(carry==1 && (a[i]=='1' || b[j]=='1')) {
                curr = "0" + curr;
                carry=1;
            } else if(carry==1) {
                curr = "1" + curr;
                carry=0;
            } else if(a[i]=='1' && b[j]=='1') {
                curr = "0" + curr;
                carry=1;
            } else if(a[i]=='1' || b[j]=='1') {
                curr = "1" + curr;
                carry=0;
            } else {
                curr = "0" + curr;
                carry=0;
            }
            i--;
            j--;
        }
        if(carry==1)
            return "1"+curr;
        return curr;
    }
};
