class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
       unordered_map<char , int> f;
       int high = 0, low = 0;
       int ans = 0;
       for(high = 0 ; high< n ; high++)
       {
            f[s[high]]++;

            int len = high - low + 1;

            while(f.size() < len)
            {
                f[s[low]]--;

                if(f[s[low]] == 0)  f.erase(s[low]);

                low++;

                len = high - low + 1;
            }


            len = high-low+1;
            ans = max(ans , len);
       }
       return ans;
       
        
    }
};