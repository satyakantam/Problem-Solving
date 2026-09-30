class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        int r = 0;
        vector<int> ans;
        for(char ch : seq)
        {
            if(ch == '(')   
            {
                r++;    
                ans.push_back(r%2);
            }             
            else   
            {
                
                ans.push_back(r%2);
                r--;
            }     
        }
        return ans;
    }
};