class Solution {
public:
    bool isPalindrome(int x) {
        long long pal=0;
        int x1=x;
        if(x<0) return false;
        while(x>0){
            int last= x%10;
            pal=(pal*10)+last;
            x=x/10;
        }
        if(x1 == pal) return true;
    else return false;
    }
    
};