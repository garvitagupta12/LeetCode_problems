class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int index1=0, index2=0 ;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mini)
            {
                mini=nums[i];
                index1=i;
            }
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                index2=i;
            }
        }
        int n=nums.size();
        int low=min(index1,index2);
        int high=max(index1,index2);
        int case1 = high + 1;
        int case2= n-low;
        int case3= (low+1) + (n-high) ;
        return min({case1,case2,case3});
    }
};