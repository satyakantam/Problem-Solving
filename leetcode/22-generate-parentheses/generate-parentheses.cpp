class Solution {
public:

    bool isValid(string s)
        {
            int count = 0;

            for(char ch : s)
            {
                if(ch == '(')   count++;
                if(ch == ')')   count--;

                if(count<0) return false;

                
            }
            return count==0;
        }

    void generate(string s , int n , vector<string>& ans)
    {
        if(s.length() == 2*n)
        {
            if(isValid(s))  ans.push_back(s);


            return;
        }

        generate(s+'(' , n , ans);
        generate(s+')' , n , ans);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        generate("" , n , ans);

        return ans;


    }
};