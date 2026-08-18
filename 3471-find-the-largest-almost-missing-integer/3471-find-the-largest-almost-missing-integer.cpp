class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums) 
        {
            freq[x]++;
        }
        int maxi = -1;
        if (k == n) 
        {
            for (int x : nums) 
            {
                maxi = max(maxi, x);
            }
            return maxi;
        }
        if (k == 1) 
        {
            for (auto& [val, count] : freq) 
            {
                if (count == 1) 
                {
                    maxi = max(maxi, val);
                }
            }
            return maxi;
        }
        if (freq[nums[0]] == 1) 
        {
            maxi = max(maxi, nums[0]);
        }
        if (freq[nums[n - 1]] == 1) 
        {
            maxi = max(maxi, nums[n - 1]);
        }
        return maxi;
    }
};