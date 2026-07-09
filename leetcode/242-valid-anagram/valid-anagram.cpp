class Solution {
public:
    bool isAnagram(string s, string t) {




        if(s.size() != t.size())
        {
            return false;
        }
        vector<int> freq1(26 , 0);
        vector<int> freq2(26 , 0);
        for(char ch : s)
        {
            freq1[ch - 'a']++;
        }
        for(char ch : t)
        {
            freq2[ch - 'a']++;
        }

        bool flag = true;
        for(int i = 0; i<26 ; i++)
        {
            if(freq1[i] != freq2[i])
            {
                flag = false;
                break;
            }
                

        }
        if(!flag)   return false;
        else    return true;


    }
};