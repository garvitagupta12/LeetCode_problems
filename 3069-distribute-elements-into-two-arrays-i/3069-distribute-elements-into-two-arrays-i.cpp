class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n = nums.size();
        int a=0,b=0;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<n;i++)
        {
            int x=arr1[a];
            int y=arr2[b];
            if(x>y)
            {
                a++;
                arr1.push_back(nums[i]);
            }
            else
            {
                b++;
                arr2.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(int j=0;j<arr1.size();j++)
        {
            ans.push_back(arr1[j]);
        }
        for(int j=0;j<arr2.size();j++)
        {
            ans.push_back(arr2[j]);
        }
        return ans;
    }
};