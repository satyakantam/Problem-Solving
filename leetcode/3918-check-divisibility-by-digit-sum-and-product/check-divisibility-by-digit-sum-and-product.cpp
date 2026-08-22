class Solution {
public:
    bool checkDivisibility(int n) {

        int x = n;
        long long cute = 0;
        long long cutie = 1;

        while(n>0)
        {
            int rem = n%10;
            cute += rem;
            cutie *= rem;
            n/=10;
        }
        return x % (cute + cutie) == 0;
    }
    
};