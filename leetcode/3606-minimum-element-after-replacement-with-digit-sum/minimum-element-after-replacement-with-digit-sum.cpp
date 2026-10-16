class Solution {
public:
    int replacement(int x)
    {
        int num = x;
        int sum = 0;
        while(num>0)
        {
            int rem = num%10;
            sum+=rem;
            num/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++)
        {
            nums[i] = replacement(nums[i]);
        }

        return *min_element(nums.begin() , nums.end());
    }
};