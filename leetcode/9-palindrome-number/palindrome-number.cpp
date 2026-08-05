class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int ans = 0;
        int a = x;
        while (x != 0) {
            int rem = x % 10;
            x /= 10;

            
            if (ans > INT_MAX / 10 || 
               (ans == INT_MAX / 10 && rem > 7))
                return false;

            if (ans < INT_MIN / 10 || 
               (ans == INT_MIN / 10 && rem < -8))
                return false;

            ans = ans * 10 + rem;
        }
        return ans == a;
        
    }
};