class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];
        int temp=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                temp+=nums[i];
            }
            else
            {
                temp=nums[i];
            }
            sum=max(sum,temp);
        }
        return sum;
    }
};