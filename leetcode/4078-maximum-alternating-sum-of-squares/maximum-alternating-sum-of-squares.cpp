class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++)
        {
            if(nums[i] < 0)
            {
                nums[i] = abs(nums[i]);
            }
        }
        sort(nums.begin() , nums.end());

        long long ans = 0;
        long long sum = 0;
        long long diff = 0;
        
        
            
        for(int i = 0; i<n/2; i++)
        {
            diff+=pow(nums[i] , 2);
        }
        for(int i = n/2; i<n; i++)
        {
            sum+=pow(nums[i] , 2);
        }
        ans = sum-diff;
            
        
        return ans;
        
    }
};