class Solution {
public:
    int ans(int i,int j,vector<int>& nums)
    {
        int start=i;
        int end=j;
        int sum=0;
        while(start<=end)
        {
            sum+=nums[start++];
        }
        return sum;
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int count=0;
        int final=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                count=j-i+1;
                if(count>=l && count<=r)
                {
                    int sum=ans(i,j,nums);
                    if(sum>0)
                    {
                        final=min(final,sum);
                    }
                }
            }
        }
        return (final == INT_MAX) ? -1 : final;
    }
};