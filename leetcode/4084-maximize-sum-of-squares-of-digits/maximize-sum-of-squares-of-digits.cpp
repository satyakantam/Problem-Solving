class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if(sum > num*9) return "";
        string s = "";

        while(sum>=9)
        {
            s.push_back('9');
            sum-=9;
        }

        if(sum > 0)
        {
            s.push_back('0' + sum);
        }

        while(s.size() < num)   s.push_back('0');



        return s;
    }
};