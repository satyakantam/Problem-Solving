class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(26 , 0);
        int left = 0, right = 0;
        int maxCount = 0;
        int maxLen = 0;

        while(right < s.size())
        {
            f[s[right] - 'A']++;
            maxCount = max(maxCount , f[s[right] - 'A']);
            
            while((right - left + 1) - maxCount > k)
            {
                f[s[left] - 'A']--;
                left++;
            }

            maxLen = max((right - left + 1) , maxLen);

            right++;
        }
        return maxLen;
    }
};