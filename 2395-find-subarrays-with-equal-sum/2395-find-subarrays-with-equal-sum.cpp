class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>total;
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i]+nums[i+1];
            if(total.count(sum))
            {
                return true;
            }
            total.insert(sum);
        }
        return false;
    }
};