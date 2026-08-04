class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int start=nums[0];
        int end=nums[n-1];
        int j=0;
        for(int i=start;i<=end;i++)
        {
            while(j<n && nums[j]<i)
            {
                j++;
            }
            if(j<n && nums[j]==i)
            {
                j++;
            }
            else
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};