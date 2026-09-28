class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int maxi=0;
        for(char c : s)
        {
            if(c=='(')
            {
                ans++;
            }
            maxi=max(maxi,ans);
            if(c==')')
            {
                ans--;
            }
        }
        return maxi;
    }
};