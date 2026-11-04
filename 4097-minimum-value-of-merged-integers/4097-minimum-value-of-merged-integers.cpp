class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int v=INT_MAX;
        for(int i=0;i<nums.size();i+=2)
        {
            string merged=to_string(nums[i])+to_string(nums[i+1]);
            int val=stoi(merged);
            v=min(v,val);
        }
        return v;
    }
};