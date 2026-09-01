class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int> st;
        for(int i = 0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        int seggs = k;

        while(st.count(seggs)) {
            seggs += k;
        }
        return seggs;

        
    }
};