class Solution {
public:
    bool isPalindrome(int x) {
        int digit;
        int ans=x;
         long long int a=0;
        while(x!=0){
            digit=x%10;
            a=a*10+digit;
            x=x/10;
        }
        if(ans==a && ans>=0)
            return true;
        return false;
        
    }
};