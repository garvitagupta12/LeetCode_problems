class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums)
        {
            if(x%2==0)
            {
                mp[x]++;
            }
        }
        int maxi=0;
        int numi=-1;
        for(auto y : mp)
        {
            if(y.second>maxi)
            {
                maxi=y.second;
                numi=y.first;
            }
            else if(y.second==maxi)
            {
                numi=min(y.first,numi);
            }
        }
        return numi;
    }
};