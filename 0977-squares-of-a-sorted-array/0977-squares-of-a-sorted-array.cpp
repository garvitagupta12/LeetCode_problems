class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int start = 0;
        int end = n - 1;
        for (int i = n - 1; i >= 0; i--) 
        {
            if (abs(nums[start]) > abs(nums[end])) 
            {
                result[i] = nums[start] * nums[start];
                start++;
            } 
            else 
            {
                result[i] = nums[end] * nums[end];
                end--;
            }
        }
        return result;
    }
};