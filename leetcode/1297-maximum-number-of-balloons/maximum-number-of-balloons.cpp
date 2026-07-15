class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        unordered_map<char , int> f;
        for(int i = 0; i<n; i++)
        {
            f[text[i]]++;
        }

        return min({f['b'] , f['a'] , f['l']/2 , f['o']/2 , f['n']});
    }
};