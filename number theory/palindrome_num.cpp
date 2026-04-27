class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x==0) return true;
        int temp = x;
        long long rev = 0;
        while(temp>0){
            int last = temp%10;
            temp /= 10;
            rev = 10*rev + last;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};